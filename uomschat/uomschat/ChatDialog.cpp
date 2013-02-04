// ChatDialog.cpp : Implementation of CChatDialog

#include "stdafx.h"
#include "ChatDialog.h"

LRESULT CChatDialog::OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	CAxDialogImpl<CChatDialog>::OnInitDialog(uMsg, wParam, lParam, bHandled);
	bHandled = TRUE;
		
	_hBrowser  = GetDlgItem(IDC_BROWSER);

	DoResizeControl();
	return 1;  // Let the system set the focus
}

// �Ӵ���С���Ķ�
LRESULT CChatDialog::OnSize(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	DoResizeControl();
	return 0;
}

// �ĉ�ؼ���С: ϣ��IE�܁�����ClientRect
void CChatDialog::DoResizeControl() {	
	// ���ǵĴ�С
	RECT R;
	this->GetClientRect(&R);

	// �ĉ�IE�ؼ��Ĵ�С
	_hBrowser.SetWindowPos(NULL, 0, 0, R.right-R.left, R.bottom-R.top, 0);
}

// ���ĳURL
void CChatDialog::Navigate(BSTR Url)
{
	CComPtr<IWebBrowser2> pBrowser;
	HRESULT hr;
 
	hr = _hBrowser.QueryControl(&pBrowser);
	if (pBrowser)
    {
		CComVariant v;  // empty variant
		pBrowser->Navigate(Url, &v, &v, &v, &v);
    }
}