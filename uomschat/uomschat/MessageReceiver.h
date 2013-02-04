// MessageReceiver
// 转发部份ISDKPlugin2的全局消息到我们的插槽实例PluginItemHost

// MessageReceiver.h : Declaration of the CMessageReceiver

#pragma once
#include "uomschat_i.h"
#include "resource.h"       // main symbols
#include <comsvcs.h>
#include <set>

using namespace ATL;

// CMessageReceiver

class ATL_NO_VTABLE CMessageReceiver :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMessageReceiver, &CLSID_MessageReceiver>,
    public IDispatchImpl<ISDKPlugin2, &__uuidof(ISDKPlugin2), &LIBID_uomschatLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
    public IDispatchImpl<IMessageSource, &__uuidof(IMessageSource), &LIBID_uomschatLib, /* wMajor = */ 1, /* wMinor = */ 0>
{
public:
	CMessageReceiver()
	{
	}

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_MESSAGERECEIVER)

// Singleton: 接收Message和发出Message必须是同一个实例
DECLARE_CLASSFACTORY_SINGLETON(CMessageReceiver)

BEGIN_COM_MAP(CMessageReceiver)
    COM_INTERFACE_ENTRY(ISDKPlugin2)
    COM_INTERFACE_ENTRY(IMessageSource)
    COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()


// IMessageReceiver
public:
    STDMETHOD(OnConnect)(IDispatch *pApplication, LONG lPluginCookie);
    STDMETHOD(OnDisconnect)(IDispatch *pApplication, LONG lPluginCookie);
    STDMETHOD(OnNotify)(enum SDKMessageID MsgID, IDispatch *pParam);
    STDMETHOD(OnUninstall)();
    STDMETHOD(AddListener)(IMessageListener *pListener);
    STDMETHOD(RemoveListener)(IMessageListener *pListener);

private:
	typedef std::set<CComPtr<IMessageListener> > Listeners_t; // 聊天消息监听者
    Listeners_t m_listeners;
};

OBJECT_ENTRY_AUTO(__uuidof(MessageReceiver), CMessageReceiver)
