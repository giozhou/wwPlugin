// PluginItemHost.h : Declaration of the CPluginItemHost

#pragma once
#include "resource.h"       // main symbols



#include "uomschat_i.h"
#include "ChatDialog.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CPluginItemHost

class ATL_NO_VTABLE CPluginItemHost :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CPluginItemHost, &CLSID_PluginItemHost>,
	public IDispatchImpl<ISDKPluginItem, &__uuidof(ISDKPluginItem), &LIBID_uomschatLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<IMessageListener, &__uuidof(IMessageListener), &LIBID_uomschatLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CPluginItemHost()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_PLUGINITEMHOST)


BEGIN_COM_MAP(CPluginItemHost)
	COM_INTERFACE_ENTRY(ISDKPluginItem)
	COM_INTERFACE_ENTRY(IMessageListener)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

    STDMETHOD(OnCreate)(IDispatch* pSlot, long hParentWnd, long lCookie);
    STDMETHOD(OnDestroy)();
    STDMETHOD(OnNotify)(SDKItemNotifyID MsgID, IDispatch* pParam);
    STDMETHOD(OnClick)();
    STDMETHOD(OnSize)(int x, int y);
    STDMETHOD(OnMenuClick) (long lCmdID); 

	STDMETHOD(OnMessage)(SDKMessageID MsgID, IDispatch *pParam);

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

private:
    LONG _lCookie;

	// 插槽对象
    CComPtr<ISDKEServiceInputToolbarSlot> _spSlot;
	// 主程式对象
    CComPtr<ISDKApplication>  _spApp;
	// 插件容器 (由旺旺管理的挂在对话旁边的一个附属框框)
	CComPtr<ISDKPluginMainDlg> _spPluginDialog;
	// 全局信息来源
	CComPtr<IMessageSource> _spMessageSource;

	// 我们的显示内容
	CChatDialog* dialogChat;
	
	bool InitManagers(long lCookie, IDispatch* pSlot);

	HRESULT OnPluginDialogResize(IDispatch* pParam);
	
	HRESULT CreateChatDialog();
	void Pop(LPCTSTR message);
};

OBJECT_ENTRY_AUTO(__uuidof(PluginItemHost), CPluginItemHost)
