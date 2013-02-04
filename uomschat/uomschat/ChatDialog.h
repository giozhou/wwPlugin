// ChatDialog.h : Declaration of the CChatDialog

#pragma once

#include "resource.h"       // main symbols

#include <atlhost.h>

using namespace ATL;

// CChatDialog

class CChatDialog : 
	public CAxDialogImpl<CChatDialog>
{
public:
	CChatDialog()
	{
	}

	~CChatDialog()
	{
	}

	enum { IDD = IDD_CHATDIALOG };

BEGIN_MSG_MAP(CChatDialog)
	MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
	CHAIN_MSG_MAP(CAxDialogImpl<CChatDialog>)
	MESSAGE_HANDLER(WM_SIZE, OnSize)
END_MSG_MAP()

// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

	LRESULT OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnSize(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);

	void CChatDialog::Navigate(BSTR Url);

private:
	void DoResizeControl();
	CAxWindow _hBrowser;
};


