// PluginItemHost.cpp : Implementation of CPluginItemHost

#include "stdafx.h"
#include "PluginItemHost.h"
#include <comutil.h>
#include <atlstr.h>

STDMETHODIMP CPluginItemHost::OnMenuClick (long lCmdID)
{
    return S_OK;
}

STDMETHODIMP CPluginItemHost::OnSize(int x, int y)
{
    return S_OK;
}

// 插件被挂接到插槽 
STDMETHODIMP CPluginItemHost::OnCreate(IDispatch* pSlot, long hParentWnd , long lCookie)
{	
	if(!pSlot) return E_INVALIDARG;
    _lCookie = lCookie;

	if (!InitManagers(lCookie, pSlot)) return E_FAIL;

	dialogChat = new CChatDialog();
	
	return S_OK;
}

// 获取各Manager指针
bool CPluginItemHost::InitManagers(long lCookie, IDispatch* pSlot)
{
	HRESULT hr;
    _spSlot = CComQIPtr<ISDKEServiceInputToolbarSlot>(pSlot);
	
    if (_spSlot == NULL)
    {
		Pop(_T("Failed to get Slot"));
        return false;
    }

	CComPtr<IDispatch> spAppDispatch;
	_spSlot->GetApplication(lCookie, &spAppDispatch);
	_spApp = CComQIPtr<ISDKApplication>(spAppDispatch);	
    if (_spApp == NULL)
    {
		Pop(_T("Failed to get App"));
        return false;
    }    
		
	CComPtr<IDispatch> spPluginDialogDispatch;
	_spApp->GetPluginMainDlg(lCookie, &spPluginDialogDispatch);
	_spPluginDialog = CComQIPtr<ISDKPluginMainDlg>(spPluginDialogDispatch);	
    if (_spPluginDialog == NULL)
    {
		Pop(_T("Failed to get PluginMainDialog"));
        return false;
    }

	// 获取MessageSource Singleton
	hr = ::CoCreateInstance(__uuidof(MessageReceiver), NULL,
		CLSCTX_INPROC_SERVER, __uuidof(IMessageSource), (void**)&_spMessageSource);
    if (FAILED(hr))
    {
		CString message;
        message.Format(_T("Unable to get MessageSource. Code: %d."), GetLastError());
		Pop(message);
        return false;
    }

    // 加入全局消息监听的列表中
    hr = _spMessageSource->AddListener(this);
    if (FAILED(hr))
    {
		CString message;
        message.Format(_T("Failed to add listener to MessageSource. Code: %d."), GetLastError());
		Pop(message);
        return false;
    }

	return true;
}

// 插件从插槽脱离 
STDMETHODIMP CPluginItemHost::OnDestroy()
{
	if (dialogChat) {
		if (dialogChat->IsWindow()) dialogChat->DestroyWindow();
		delete dialogChat;
	}
	dialogChat = NULL;

	if (_spMessageSource) {
		// 取消全局消息监听
		_spMessageSource->RemoveListener(this);
	}

    return S_OK;
}

// 插件全局消息通知
HRESULT CPluginItemHost::OnMessage(SDKMessageID MsgID, IDispatch *pParam)
{
	if (MsgID == NOTIFY_PLUGIN_TAB_WNDSIZED)
	{
		return OnPluginDialogResize(pParam);
	}
	if (MsgID == NOTIFY_PLUGIN_MAINDLG_READY && dialogChat->IsWindow())
	{
		LONGLONG hwndCanvas;
		HRESULT hr = _spPluginDialog->GetHwnd(_lCookie, &hwndCanvas);
		if (SUCCEEDED(hr)) {
			RECT R;
			if (GetClientRect((HWND)hwndCanvas, &R)) {
				dialogChat->ResizeClient(R.right-R.left, R.bottom-R.top);
			}
		}
		return OnPluginDialogResize(pParam);
	}
	return S_OK;
}

// 插件消息通知
STDMETHODIMP CPluginItemHost::OnNotify(SDKItemNotifyID MsgID, IDispatch* pParam)
{
	if (MsgID == NOTIFY_CONTACT_TAB_CHANGED)
	{
		// TODO: 该Refactor到一个Method
		// 现在只是Demo一下啦
		CComQIPtr<ISDKNotifyContactTabChanged> spInfo(pParam);
        if (spInfo)
        {
            _bstr_t newContact;
            spInfo->get_NewContact(newContact.GetAddress());
			if (dialogChat) {
				CString csNewContact = newContact;
				dialogChat->Navigate(CComBSTR(_T("http://www.baidu.com/s?wd=") + csNewContact));
			}
        }
	}
    return S_OK;
}

// 插件图标被点击
STDMETHODIMP CPluginItemHost::OnClick()
{
	if (!_spPluginDialog) return E_ABORT;

	if (!dialogChat->IsWindow()) {
		return CreateChatDialog();
	}
	
	_spPluginDialog->ShowPluginMainDlg(_lCookie, VARIANT_TRUE);
    return S_OK;
}

HRESULT CPluginItemHost::OnPluginDialogResize(IDispatch* pParam)
{
    CComQIPtr<ISDKCommonParam> spParam(pParam);
    if (spParam == NULL)
        return E_INVALIDARG;

    CComVariant var;
	spParam->Get_Param(&var);
    if (var.vt == VT_BSTR)
    {
        CString strSize((LPCTSTR)var.bstrVal);
        int posXs = strSize.Find(L"newcx=");
        int posXe = strSize.Find(L"&", posXs);
		if (posXe<0) posXe = strSize.GetLength();
        int posYs = strSize.Find(L"newcy=");
        int posYe = strSize.Find(L"&", posYs);
		if (posYe<0) posYe = strSize.GetLength();

        if (posXs >= 0 && posYs >= 0)
        {
            int cx = _ttoi(strSize.Mid(posXs + 6, posXe-(posXs+6)));
            int cy = _ttoi(strSize.Mid(posYs + 6, posYe-(posYs+6)));
            dialogChat->ResizeClient(cx, cy);
        }
    }
}

HRESULT CPluginItemHost::CreateChatDialog()
{
	_spPluginDialog->StartPluginMainDlg(_lCookie);
	_spPluginDialog->ShowPluginMainDlg(_lCookie, VARIANT_TRUE);
	_spPluginDialog->SetPluginDlgPos(_lCookie, 0,0,435,600,0);
			
    LONGLONG hwndCanvas;
    HRESULT hr = _spPluginDialog->GetHwnd(_lCookie, &hwndCanvas);
    if (FAILED(hr))
    {
        ATL::CString message;
        message.Format(_T("Unable to get PluginMainDialog hwnd. Code: %d."), GetLastError());
		Pop(message);
        return E_FAIL;
    }
	
	CString csTitle(MAKEINTRESOURCE(IDS_DIALOGTITLE));
	_spPluginDialog->SetPluginDlgStringProperty(_lCookie, CComBSTR("PluginTabTitle"), CComBSTR(csTitle));

    // 将插件的父窗口设置为旺旺分配的容器窗口
    dialogChat->Create((HWND) hwndCanvas);
	dialogChat->ResizeClient(435, 600);
    dialogChat->CenterWindow();
    dialogChat->ShowWindow(SW_SHOW);
	
	return S_OK;
}

// 简单Debug用对话框
void CPluginItemHost::Pop(LPCTSTR message)
{
	::MessageBox(NULL, message, _T("UOmsChat"), MB_OK);
}

