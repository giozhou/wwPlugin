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

// 视窗大小被改动
LRESULT CChatDialog::OnSize(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	DoResizeControl();
	return 0;
}

// 改変控件大小: 希望IE能佔整个ClientRect
void CChatDialog::DoResizeControl() {	
	// 我们的大小
	RECT R;
	this->GetClientRect(&R);

	// 改変IE控件的大小
	_hBrowser.SetWindowPos(NULL, 0, 0, R.right-R.left, R.bottom-R.top, 0);
}

// 浏览某URL
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