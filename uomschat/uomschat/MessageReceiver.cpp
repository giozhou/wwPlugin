// CMessageReceiver.cpp : Implementation of CCMessageReceiver

#include "stdafx.h"
#include "MessageReceiver.h"

STDMETHODIMP CMessageReceiver::OnConnect(IDispatch *pApplication, LONG lPluginCookie)
{
    return S_OK;
}

STDMETHODIMP CMessageReceiver::OnDisconnect(IDispatch *pApplication, LONG lPluginCookie)
{
    return S_OK;
}

STDMETHODIMP CMessageReceiver::OnNotify(enum SDKMessageID MsgID, IDispatch *pParam)
{
    if (!pParam)
        return E_INVALIDARG;

    // 转发给插槽的实现接口
    Listeners_t::iterator iter = m_listeners.begin();
    Listeners_t::iterator end = m_listeners.end();
    for (; iter != end; ++iter)
    {
		(*iter)->OnMessage(MsgID, pParam);
    }
    return S_OK;
};

STDMETHODIMP CMessageReceiver::OnUninstall()
{
    return S_OK;
}

STDMETHODIMP CMessageReceiver::AddListener(IMessageListener *pListener)
{
    if (!pListener)
        return E_INVALIDARG;

    m_listeners.insert(pListener);
    return S_OK;
}

STDMETHODIMP CMessageReceiver::RemoveListener(IMessageListener *pListener)
{
    if (!pListener)
        return E_INVALIDARG;

    m_listeners.erase(pListener);
    return S_OK;
}

// CCMessageReceiver

