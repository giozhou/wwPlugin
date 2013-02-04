

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Feb 04 18:06:05 2013
 */
/* Compiler settings for wwsdkcom_forPlugin.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __wwsdkcom_forPlugin_h__
#define __wwsdkcom_forPlugin_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISDKApplication_FWD_DEFINED__
#define __ISDKApplication_FWD_DEFINED__
typedef interface ISDKApplication ISDKApplication;
#endif 	/* __ISDKApplication_FWD_DEFINED__ */


#ifndef __ISDKContactMgr_FWD_DEFINED__
#define __ISDKContactMgr_FWD_DEFINED__
typedef interface ISDKContactMgr ISDKContactMgr;
#endif 	/* __ISDKContactMgr_FWD_DEFINED__ */


#ifndef __ISDKLoginUser_FWD_DEFINED__
#define __ISDKLoginUser_FWD_DEFINED__
typedef interface ISDKLoginUser ISDKLoginUser;
#endif 	/* __ISDKLoginUser_FWD_DEFINED__ */


#ifndef __ISDKEServiceDlg_FWD_DEFINED__
#define __ISDKEServiceDlg_FWD_DEFINED__
typedef interface ISDKEServiceDlg ISDKEServiceDlg;
#endif 	/* __ISDKEServiceDlg_FWD_DEFINED__ */


#ifndef __ISDKChatDlgMgr_FWD_DEFINED__
#define __ISDKChatDlgMgr_FWD_DEFINED__
typedef interface ISDKChatDlgMgr ISDKChatDlgMgr;
#endif 	/* __ISDKChatDlgMgr_FWD_DEFINED__ */


#ifndef __ISDKObjectCollection_FWD_DEFINED__
#define __ISDKObjectCollection_FWD_DEFINED__
typedef interface ISDKObjectCollection ISDKObjectCollection;
#endif 	/* __ISDKObjectCollection_FWD_DEFINED__ */


#ifndef __ISDKSlot_FWD_DEFINED__
#define __ISDKSlot_FWD_DEFINED__
typedef interface ISDKSlot ISDKSlot;
#endif 	/* __ISDKSlot_FWD_DEFINED__ */


#ifndef __ISDKChatDlg_FWD_DEFINED__
#define __ISDKChatDlg_FWD_DEFINED__
typedef interface ISDKChatDlg ISDKChatDlg;
#endif 	/* __ISDKChatDlg_FWD_DEFINED__ */


#ifndef __ISDKContact_FWD_DEFINED__
#define __ISDKContact_FWD_DEFINED__
typedef interface ISDKContact ISDKContact;
#endif 	/* __ISDKContact_FWD_DEFINED__ */


#ifndef __ISDKIMChatInputToolbarSlot_FWD_DEFINED__
#define __ISDKIMChatInputToolbarSlot_FWD_DEFINED__
typedef interface ISDKIMChatInputToolbarSlot ISDKIMChatInputToolbarSlot;
#endif 	/* __ISDKIMChatInputToolbarSlot_FWD_DEFINED__ */


#ifndef __ISDKNotifyOffline_FWD_DEFINED__
#define __ISDKNotifyOffline_FWD_DEFINED__
typedef interface ISDKNotifyOffline ISDKNotifyOffline;
#endif 	/* __ISDKNotifyOffline_FWD_DEFINED__ */


#ifndef __ISDKNotifyChatMessage_FWD_DEFINED__
#define __ISDKNotifyChatMessage_FWD_DEFINED__
typedef interface ISDKNotifyChatMessage ISDKNotifyChatMessage;
#endif 	/* __ISDKNotifyChatMessage_FWD_DEFINED__ */


#ifndef __ISDKNotifyPlugMessage_FWD_DEFINED__
#define __ISDKNotifyPlugMessage_FWD_DEFINED__
typedef interface ISDKNotifyPlugMessage ISDKNotifyPlugMessage;
#endif 	/* __ISDKNotifyPlugMessage_FWD_DEFINED__ */


#ifndef __ISDKNotifyContactTabChanging_FWD_DEFINED__
#define __ISDKNotifyContactTabChanging_FWD_DEFINED__
typedef interface ISDKNotifyContactTabChanging ISDKNotifyContactTabChanging;
#endif 	/* __ISDKNotifyContactTabChanging_FWD_DEFINED__ */


#ifndef __ISDKNotifyContactTabChanged_FWD_DEFINED__
#define __ISDKNotifyContactTabChanged_FWD_DEFINED__
typedef interface ISDKNotifyContactTabChanged ISDKNotifyContactTabChanged;
#endif 	/* __ISDKNotifyContactTabChanged_FWD_DEFINED__ */


#ifndef __ISDKNotifyContactInputboxContentChanged_FWD_DEFINED__
#define __ISDKNotifyContactInputboxContentChanged_FWD_DEFINED__
typedef interface ISDKNotifyContactInputboxContentChanged ISDKNotifyContactInputboxContentChanged;
#endif 	/* __ISDKNotifyContactInputboxContentChanged_FWD_DEFINED__ */


#ifndef __ISDKGroup_FWD_DEFINED__
#define __ISDKGroup_FWD_DEFINED__
typedef interface ISDKGroup ISDKGroup;
#endif 	/* __ISDKGroup_FWD_DEFINED__ */


#ifndef __ISDKEServiceInputToolbarSlot_FWD_DEFINED__
#define __ISDKEServiceInputToolbarSlot_FWD_DEFINED__
typedef interface ISDKEServiceInputToolbarSlot ISDKEServiceInputToolbarSlot;
#endif 	/* __ISDKEServiceInputToolbarSlot_FWD_DEFINED__ */


#ifndef __ISDKCommonParam_FWD_DEFINED__
#define __ISDKCommonParam_FWD_DEFINED__
typedef interface ISDKCommonParam ISDKCommonParam;
#endif 	/* __ISDKCommonParam_FWD_DEFINED__ */


#ifndef __ISDKPluginMainDlg_FWD_DEFINED__
#define __ISDKPluginMainDlg_FWD_DEFINED__
typedef interface ISDKPluginMainDlg ISDKPluginMainDlg;
#endif 	/* __ISDKPluginMainDlg_FWD_DEFINED__ */


#ifndef __ISDKNotifyTradeInfo_FWD_DEFINED__
#define __ISDKNotifyTradeInfo_FWD_DEFINED__
typedef interface ISDKNotifyTradeInfo ISDKNotifyTradeInfo;
#endif 	/* __ISDKNotifyTradeInfo_FWD_DEFINED__ */


#ifndef __ISDKEServiceProperty_FWD_DEFINED__
#define __ISDKEServiceProperty_FWD_DEFINED__
typedef interface ISDKEServiceProperty ISDKEServiceProperty;
#endif 	/* __ISDKEServiceProperty_FWD_DEFINED__ */


#ifndef __ISDKPlugin2_FWD_DEFINED__
#define __ISDKPlugin2_FWD_DEFINED__
typedef interface ISDKPlugin2 ISDKPlugin2;
#endif 	/* __ISDKPlugin2_FWD_DEFINED__ */


#ifndef __ISDKPluginItem_FWD_DEFINED__
#define __ISDKPluginItem_FWD_DEFINED__
typedef interface ISDKPluginItem ISDKPluginItem;
#endif 	/* __ISDKPluginItem_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wwsdkcom_forPlugin_0000_0000 */
/* [local] */ 
















extern RPC_IF_HANDLE __MIDL_itf_wwsdkcom_forPlugin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wwsdkcom_forPlugin_0000_0000_v0_0_s_ifspec;

#ifndef __ISDKApplication_INTERFACE_DEFINED__
#define __ISDKApplication_INTERFACE_DEFINED__

/* interface ISDKApplication */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F10F026-1071-4a68-9715-100BB395AEE2")
    ISDKApplication : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContactMgr( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppContactMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMainFrame( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppMainFrame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLoginUser( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppLoginUser) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlgMgr( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppChatDlgMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BrowseURL( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrURL) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [in] */ LONG lCookie,
            /* [out] */ BSTR *bstrDispVersion,
            /* [out] */ LONG *pVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TranslateUrl( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR strSrcUrl,
            /* [retval][out] */ BSTR *strDstUrl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTribeMgr( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppTribeMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTribeDlgMgr( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppTribeDlgMgr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAppPath( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *bstrAppPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSessionKey( 
            /* [in] */ LONG lCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendMsg( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR targetID,
            /* [in] */ BSTR msgContent,
            /* [in] */ BSTR uuid_flag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPluginMainDlg( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppPluginMainDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegisterPreTranslate( 
            /* [in] */ LONG lCookie,
            /* [in] */ LONG_PTR callbackFunc) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetEServiceProperty( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppEServiceProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddIP( 
            /* [in] */ LONG lCookie,
            /* [in] */ LONG lIpAddr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWWProxySetting( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *proxySetting) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKApplication * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKApplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKApplication * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContactMgr )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppContactMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainFrame )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppMainFrame);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLoginUser )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppLoginUser);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgMgr )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppChatDlgMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BrowseURL )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrURL);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [out] */ BSTR *bstrDispVersion,
            /* [out] */ LONG *pVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TranslateUrl )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR strSrcUrl,
            /* [retval][out] */ BSTR *strDstUrl);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTribeMgr )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppTribeMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTribeDlgMgr )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppTribeDlgMgr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAppPath )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *bstrAppPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSessionKey )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SendMsg )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR targetID,
            /* [in] */ BSTR msgContent,
            /* [in] */ BSTR uuid_flag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPluginMainDlg )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppPluginMainDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegisterPreTranslate )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [in] */ LONG_PTR callbackFunc);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEServiceProperty )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppEServiceProperty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddIP )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [in] */ LONG lIpAddr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWWProxySetting )( 
            ISDKApplication * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *proxySetting);
        
        END_INTERFACE
    } ISDKApplicationVtbl;

    interface ISDKApplication
    {
        CONST_VTBL struct ISDKApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKApplication_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKApplication_GetContactMgr(This,lCookie,ppContactMgr)	\
    ( (This)->lpVtbl -> GetContactMgr(This,lCookie,ppContactMgr) ) 

#define ISDKApplication_GetMainFrame(This,lCookie,ppMainFrame)	\
    ( (This)->lpVtbl -> GetMainFrame(This,lCookie,ppMainFrame) ) 

#define ISDKApplication_GetLoginUser(This,lCookie,ppLoginUser)	\
    ( (This)->lpVtbl -> GetLoginUser(This,lCookie,ppLoginUser) ) 

#define ISDKApplication_GetChatDlgMgr(This,lCookie,ppChatDlgMgr)	\
    ( (This)->lpVtbl -> GetChatDlgMgr(This,lCookie,ppChatDlgMgr) ) 

#define ISDKApplication_BrowseURL(This,lCookie,bstrURL)	\
    ( (This)->lpVtbl -> BrowseURL(This,lCookie,bstrURL) ) 

#define ISDKApplication_GetVersion(This,lCookie,bstrDispVersion,pVersion)	\
    ( (This)->lpVtbl -> GetVersion(This,lCookie,bstrDispVersion,pVersion) ) 

#define ISDKApplication_TranslateUrl(This,lCookie,strSrcUrl,strDstUrl)	\
    ( (This)->lpVtbl -> TranslateUrl(This,lCookie,strSrcUrl,strDstUrl) ) 

#define ISDKApplication_GetTribeMgr(This,lCookie,ppTribeMgr)	\
    ( (This)->lpVtbl -> GetTribeMgr(This,lCookie,ppTribeMgr) ) 

#define ISDKApplication_GetTribeDlgMgr(This,lCookie,ppTribeDlgMgr)	\
    ( (This)->lpVtbl -> GetTribeDlgMgr(This,lCookie,ppTribeDlgMgr) ) 

#define ISDKApplication_GetAppPath(This,lCookie,bstrAppPath)	\
    ( (This)->lpVtbl -> GetAppPath(This,lCookie,bstrAppPath) ) 

#define ISDKApplication_GetSessionKey(This,lCookie)	\
    ( (This)->lpVtbl -> GetSessionKey(This,lCookie) ) 

#define ISDKApplication_SendMsg(This,lCookie,targetID,msgContent,uuid_flag)	\
    ( (This)->lpVtbl -> SendMsg(This,lCookie,targetID,msgContent,uuid_flag) ) 

#define ISDKApplication_GetPluginMainDlg(This,lCookie,ppPluginMainDlg)	\
    ( (This)->lpVtbl -> GetPluginMainDlg(This,lCookie,ppPluginMainDlg) ) 

#define ISDKApplication_RegisterPreTranslate(This,lCookie,callbackFunc)	\
    ( (This)->lpVtbl -> RegisterPreTranslate(This,lCookie,callbackFunc) ) 

#define ISDKApplication_GetEServiceProperty(This,lCookie,ppEServiceProperty)	\
    ( (This)->lpVtbl -> GetEServiceProperty(This,lCookie,ppEServiceProperty) ) 

#define ISDKApplication_AddIP(This,lCookie,lIpAddr)	\
    ( (This)->lpVtbl -> AddIP(This,lCookie,lIpAddr) ) 

#define ISDKApplication_GetWWProxySetting(This,lCookie,proxySetting)	\
    ( (This)->lpVtbl -> GetWWProxySetting(This,lCookie,proxySetting) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKApplication_INTERFACE_DEFINED__ */


#ifndef __ISDKContactMgr_INTERFACE_DEFINED__
#define __ISDKContactMgr_INTERFACE_DEFINED__

/* interface ISDKContactMgr */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKContactMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2407B285-EABE-4940-9201-6FA0E765C32F")
    ISDKContactMgr : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContact( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrContactUID,
            /* [retval][out] */ IDispatch **ppContact) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRecentContactCollection( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppRecentContactCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFilterContactCollection( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppFilterContactCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStrangerContactCollection( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppStrangerContactCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRootGroup( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppGroupObj) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGroup( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR sGroupID,
            /* [retval][out] */ IDispatch **ppGroupObj) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContactCount( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR sGroupID,
            /* [in] */ VARIANT_BOOL vbRecursive,
            /* [retval][out] */ LONG *pContactCnt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContactIDList( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR sGroupID,
            /* [in] */ VARIANT_BOOL vbRecursive,
            /* [retval][out] */ BSTR *pbstrContacts) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKContactMgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKContactMgr * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKContactMgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKContactMgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKContactMgr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKContactMgr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKContactMgr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKContactMgr * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKContactMgr * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContact )( 
            ISDKContactMgr * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrContactUID,
            /* [retval][out] */ IDispatch **ppContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRecentContactCollection )( 
            ISDKContactMgr * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppRecentContactCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterContactCollection )( 
            ISDKContactMgr * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppFilterContactCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStrangerContactCollection )( 
            ISDKContactMgr * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppStrangerContactCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRootGroup )( 
            ISDKContactMgr * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppGroupObj);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGroup )( 
            ISDKContactMgr * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR sGroupID,
            /* [retval][out] */ IDispatch **ppGroupObj);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContactCount )( 
            ISDKContactMgr * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR sGroupID,
            /* [in] */ VARIANT_BOOL vbRecursive,
            /* [retval][out] */ LONG *pContactCnt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContactIDList )( 
            ISDKContactMgr * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR sGroupID,
            /* [in] */ VARIANT_BOOL vbRecursive,
            /* [retval][out] */ BSTR *pbstrContacts);
        
        END_INTERFACE
    } ISDKContactMgrVtbl;

    interface ISDKContactMgr
    {
        CONST_VTBL struct ISDKContactMgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKContactMgr_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKContactMgr_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKContactMgr_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKContactMgr_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKContactMgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKContactMgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKContactMgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKContactMgr_GetApplication(This,lCookie,ppApplication)	\
    ( (This)->lpVtbl -> GetApplication(This,lCookie,ppApplication) ) 

#define ISDKContactMgr_GetContact(This,lCookie,bstrContactUID,ppContact)	\
    ( (This)->lpVtbl -> GetContact(This,lCookie,bstrContactUID,ppContact) ) 

#define ISDKContactMgr_GetRecentContactCollection(This,lCookie,ppRecentContactCollection)	\
    ( (This)->lpVtbl -> GetRecentContactCollection(This,lCookie,ppRecentContactCollection) ) 

#define ISDKContactMgr_GetFilterContactCollection(This,lCookie,ppFilterContactCollection)	\
    ( (This)->lpVtbl -> GetFilterContactCollection(This,lCookie,ppFilterContactCollection) ) 

#define ISDKContactMgr_GetStrangerContactCollection(This,lCookie,ppStrangerContactCollection)	\
    ( (This)->lpVtbl -> GetStrangerContactCollection(This,lCookie,ppStrangerContactCollection) ) 

#define ISDKContactMgr_GetRootGroup(This,lCookie,ppGroupObj)	\
    ( (This)->lpVtbl -> GetRootGroup(This,lCookie,ppGroupObj) ) 

#define ISDKContactMgr_GetGroup(This,lCookie,sGroupID,ppGroupObj)	\
    ( (This)->lpVtbl -> GetGroup(This,lCookie,sGroupID,ppGroupObj) ) 

#define ISDKContactMgr_GetContactCount(This,lCookie,sGroupID,vbRecursive,pContactCnt)	\
    ( (This)->lpVtbl -> GetContactCount(This,lCookie,sGroupID,vbRecursive,pContactCnt) ) 

#define ISDKContactMgr_GetContactIDList(This,lCookie,sGroupID,vbRecursive,pbstrContacts)	\
    ( (This)->lpVtbl -> GetContactIDList(This,lCookie,sGroupID,vbRecursive,pbstrContacts) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKContactMgr_INTERFACE_DEFINED__ */


#ifndef __ISDKLoginUser_INTERFACE_DEFINED__
#define __ISDKLoginUser_INTERFACE_DEFINED__

/* interface ISDKLoginUser */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKLoginUser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF93245E-17D7-48ba-9678-DB25B9A0ABCD")
    ISDKLoginUser : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUserID( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrUID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSiteID( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrSiteID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSiteName( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrSiteName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNickName( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrNickName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetActivitiesLevel( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ LONG *pLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetServerTime( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pTime) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKLoginUserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKLoginUser * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKLoginUser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKLoginUser * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKLoginUser * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKLoginUser * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKLoginUser * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKLoginUser * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserID )( 
            ISDKLoginUser * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrUID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSiteID )( 
            ISDKLoginUser * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrSiteID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSiteName )( 
            ISDKLoginUser * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrSiteName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNickName )( 
            ISDKLoginUser * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrNickName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetActivitiesLevel )( 
            ISDKLoginUser * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ LONG *pLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServerTime )( 
            ISDKLoginUser * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pTime);
        
        END_INTERFACE
    } ISDKLoginUserVtbl;

    interface ISDKLoginUser
    {
        CONST_VTBL struct ISDKLoginUserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKLoginUser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKLoginUser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKLoginUser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKLoginUser_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKLoginUser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKLoginUser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKLoginUser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKLoginUser_GetUserID(This,lCookie,pbstrUID)	\
    ( (This)->lpVtbl -> GetUserID(This,lCookie,pbstrUID) ) 

#define ISDKLoginUser_GetSiteID(This,lCookie,pbstrSiteID)	\
    ( (This)->lpVtbl -> GetSiteID(This,lCookie,pbstrSiteID) ) 

#define ISDKLoginUser_GetSiteName(This,lCookie,pbstrSiteName)	\
    ( (This)->lpVtbl -> GetSiteName(This,lCookie,pbstrSiteName) ) 

#define ISDKLoginUser_GetNickName(This,lCookie,pbstrNickName)	\
    ( (This)->lpVtbl -> GetNickName(This,lCookie,pbstrNickName) ) 

#define ISDKLoginUser_GetActivitiesLevel(This,lCookie,pLevel)	\
    ( (This)->lpVtbl -> GetActivitiesLevel(This,lCookie,pLevel) ) 

#define ISDKLoginUser_GetServerTime(This,lCookie,pTime)	\
    ( (This)->lpVtbl -> GetServerTime(This,lCookie,pTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKLoginUser_INTERFACE_DEFINED__ */


#ifndef __ISDKEServiceDlg_INTERFACE_DEFINED__
#define __ISDKEServiceDlg_INTERFACE_DEFINED__

/* interface ISDKEServiceDlg */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKEServiceDlg;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("685D5C4D-8366-4CF5-9697-859396AB3A28")
    ISDKEServiceDlg : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetActiveContact( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppContact) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInputToolbarSlot( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppInputToolbarSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertText2InputBox( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrUID,
            /* [in] */ BSTR bstrText,
            /* [in] */ LONG nType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertText2HistoryBox( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR contact_id,
            /* [in] */ BSTR notify_content,
            /* [in] */ LONG callbackId,
            /* [in] */ BSTR bstrCBBtnInfo,
            /* [in] */ VARIANT_BOOL bneedCallback,
            /* [in] */ VARIANT_BOOL bSysStyle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChildWndPos( 
            /* [in] */ LONG lCookie,
            /* [in] */ LONG type,
            /* [out] */ LONG *x,
            /* [out] */ LONG *y,
            /* [out] */ LONG *dx,
            /* [out] */ LONG *dy) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAllContacts( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppContactCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReplaceWordInInputBox( 
            /* [in] */ LONG lCookie,
            /* [in] */ LONG lStart,
            /* [in] */ LONG lEnd,
            /* [in] */ BSTR bstrOld,
            /* [in] */ BSTR bstrNew) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TransferContact( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR contactID,
            /* [in] */ BSTR targetID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKEServiceDlgVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKEServiceDlg * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKEServiceDlg * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKEServiceDlg * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKEServiceDlg * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKEServiceDlg * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKEServiceDlg * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKEServiceDlg * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetActiveContact )( 
            ISDKEServiceDlg * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKEServiceDlg * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInputToolbarSlot )( 
            ISDKEServiceDlg * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppInputToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertText2InputBox )( 
            ISDKEServiceDlg * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrUID,
            /* [in] */ BSTR bstrText,
            /* [in] */ LONG nType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertText2HistoryBox )( 
            ISDKEServiceDlg * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR contact_id,
            /* [in] */ BSTR notify_content,
            /* [in] */ LONG callbackId,
            /* [in] */ BSTR bstrCBBtnInfo,
            /* [in] */ VARIANT_BOOL bneedCallback,
            /* [in] */ VARIANT_BOOL bSysStyle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChildWndPos )( 
            ISDKEServiceDlg * This,
            /* [in] */ LONG lCookie,
            /* [in] */ LONG type,
            /* [out] */ LONG *x,
            /* [out] */ LONG *y,
            /* [out] */ LONG *dx,
            /* [out] */ LONG *dy);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllContacts )( 
            ISDKEServiceDlg * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppContactCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReplaceWordInInputBox )( 
            ISDKEServiceDlg * This,
            /* [in] */ LONG lCookie,
            /* [in] */ LONG lStart,
            /* [in] */ LONG lEnd,
            /* [in] */ BSTR bstrOld,
            /* [in] */ BSTR bstrNew);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TransferContact )( 
            ISDKEServiceDlg * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR contactID,
            /* [in] */ BSTR targetID);
        
        END_INTERFACE
    } ISDKEServiceDlgVtbl;

    interface ISDKEServiceDlg
    {
        CONST_VTBL struct ISDKEServiceDlgVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKEServiceDlg_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKEServiceDlg_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKEServiceDlg_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKEServiceDlg_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKEServiceDlg_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKEServiceDlg_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKEServiceDlg_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKEServiceDlg_GetActiveContact(This,lCookie,ppContact)	\
    ( (This)->lpVtbl -> GetActiveContact(This,lCookie,ppContact) ) 

#define ISDKEServiceDlg_GetApplication(This,lCookie,ppApplication)	\
    ( (This)->lpVtbl -> GetApplication(This,lCookie,ppApplication) ) 

#define ISDKEServiceDlg_GetInputToolbarSlot(This,lCookie,ppInputToolbarSlot)	\
    ( (This)->lpVtbl -> GetInputToolbarSlot(This,lCookie,ppInputToolbarSlot) ) 

#define ISDKEServiceDlg_InsertText2InputBox(This,lCookie,bstrUID,bstrText,nType)	\
    ( (This)->lpVtbl -> InsertText2InputBox(This,lCookie,bstrUID,bstrText,nType) ) 

#define ISDKEServiceDlg_InsertText2HistoryBox(This,lCookie,contact_id,notify_content,callbackId,bstrCBBtnInfo,bneedCallback,bSysStyle)	\
    ( (This)->lpVtbl -> InsertText2HistoryBox(This,lCookie,contact_id,notify_content,callbackId,bstrCBBtnInfo,bneedCallback,bSysStyle) ) 

#define ISDKEServiceDlg_GetChildWndPos(This,lCookie,type,x,y,dx,dy)	\
    ( (This)->lpVtbl -> GetChildWndPos(This,lCookie,type,x,y,dx,dy) ) 

#define ISDKEServiceDlg_GetAllContacts(This,lCookie,ppContactCollection)	\
    ( (This)->lpVtbl -> GetAllContacts(This,lCookie,ppContactCollection) ) 

#define ISDKEServiceDlg_ReplaceWordInInputBox(This,lCookie,lStart,lEnd,bstrOld,bstrNew)	\
    ( (This)->lpVtbl -> ReplaceWordInInputBox(This,lCookie,lStart,lEnd,bstrOld,bstrNew) ) 

#define ISDKEServiceDlg_TransferContact(This,lCookie,contactID,targetID)	\
    ( (This)->lpVtbl -> TransferContact(This,lCookie,contactID,targetID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKEServiceDlg_INTERFACE_DEFINED__ */


#ifndef __ISDKChatDlgMgr_INTERFACE_DEFINED__
#define __ISDKChatDlgMgr_INTERFACE_DEFINED__

/* interface ISDKChatDlgMgr */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKChatDlgMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8AF53472-56D3-4838-BD3C-E8284E5C8D22")
    ISDKChatDlgMgr : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlgByUID( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ IDispatch **ppChatDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlgCollection( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppChatDlgCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetEServiceDlg( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppChatDlg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKChatDlgMgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKChatDlgMgr * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKChatDlgMgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKChatDlgMgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKChatDlgMgr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKChatDlgMgr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKChatDlgMgr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKChatDlgMgr * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgByUID )( 
            ISDKChatDlgMgr * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrUID,
            /* [retval][out] */ IDispatch **ppChatDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKChatDlgMgr * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgCollection )( 
            ISDKChatDlgMgr * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppChatDlgCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEServiceDlg )( 
            ISDKChatDlgMgr * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppChatDlg);
        
        END_INTERFACE
    } ISDKChatDlgMgrVtbl;

    interface ISDKChatDlgMgr
    {
        CONST_VTBL struct ISDKChatDlgMgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKChatDlgMgr_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKChatDlgMgr_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKChatDlgMgr_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKChatDlgMgr_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKChatDlgMgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKChatDlgMgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKChatDlgMgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKChatDlgMgr_GetChatDlgByUID(This,lCookie,bstrUID,ppChatDlg)	\
    ( (This)->lpVtbl -> GetChatDlgByUID(This,lCookie,bstrUID,ppChatDlg) ) 

#define ISDKChatDlgMgr_GetApplication(This,lCookie,ppApplication)	\
    ( (This)->lpVtbl -> GetApplication(This,lCookie,ppApplication) ) 

#define ISDKChatDlgMgr_GetChatDlgCollection(This,lCookie,ppChatDlgCollection)	\
    ( (This)->lpVtbl -> GetChatDlgCollection(This,lCookie,ppChatDlgCollection) ) 

#define ISDKChatDlgMgr_GetEServiceDlg(This,lCookie,ppChatDlg)	\
    ( (This)->lpVtbl -> GetEServiceDlg(This,lCookie,ppChatDlg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKChatDlgMgr_INTERFACE_DEFINED__ */


#ifndef __ISDKObjectCollection_INTERFACE_DEFINED__
#define __ISDKObjectCollection_INTERFACE_DEFINED__

/* interface ISDKObjectCollection */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKObjectCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1AE3F1AB-06ED-42C6-AEBB-87DA831BF73B")
    ISDKObjectCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *lpCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ VARIANT var) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ LONG lIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG lIndex,
            /* [retval][out] */ VARIANT *pVar) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IEnumVARIANT **ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKObjectCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKObjectCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKObjectCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKObjectCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKObjectCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKObjectCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKObjectCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKObjectCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISDKObjectCollection * This,
            /* [retval][out] */ LONG *lpCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ISDKObjectCollection * This,
            /* [in] */ VARIANT var);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ISDKObjectCollection * This,
            /* [in] */ LONG lIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            ISDKObjectCollection * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISDKObjectCollection * This,
            /* [in] */ LONG lIndex,
            /* [retval][out] */ VARIANT *pVar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISDKObjectCollection * This,
            /* [retval][out] */ IEnumVARIANT **ppEnum);
        
        END_INTERFACE
    } ISDKObjectCollectionVtbl;

    interface ISDKObjectCollection
    {
        CONST_VTBL struct ISDKObjectCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKObjectCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKObjectCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKObjectCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKObjectCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKObjectCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKObjectCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKObjectCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKObjectCollection_get_Count(This,lpCount)	\
    ( (This)->lpVtbl -> get_Count(This,lpCount) ) 

#define ISDKObjectCollection_Add(This,var)	\
    ( (This)->lpVtbl -> Add(This,var) ) 

#define ISDKObjectCollection_Remove(This,lIndex)	\
    ( (This)->lpVtbl -> Remove(This,lIndex) ) 

#define ISDKObjectCollection_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define ISDKObjectCollection_get_Item(This,lIndex,pVar)	\
    ( (This)->lpVtbl -> get_Item(This,lIndex,pVar) ) 

#define ISDKObjectCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKObjectCollection_INTERFACE_DEFINED__ */


#ifndef __ISDKSlot_INTERFACE_DEFINED__
#define __ISDKSlot_INTERFACE_DEFINED__

/* interface ISDKSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7974CE15-A974-48ce-AD3F-19C0A7F715DE")
    ISDKSlot : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowItem( 
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnableItem( 
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKSlot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKSlot * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKSlot * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        END_INTERFACE
    } ISDKSlotVtbl;

    interface ISDKSlot
    {
        CONST_VTBL struct ISDKSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKSlot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKSlot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKSlot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKSlot_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKSlot_ShowItem(This,bShow,lItemCookie)	\
    ( (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie) ) 

#define ISDKSlot_EnableItem(This,bEnable,lItemCookie)	\
    ( (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKSlot_INTERFACE_DEFINED__ */


#ifndef __ISDKChatDlg_INTERFACE_DEFINED__
#define __ISDKChatDlg_INTERFACE_DEFINED__

/* interface ISDKChatDlg */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKChatDlg;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A6084910-ACFE-49ce-9B76-B871CC227FF6")
    ISDKChatDlg : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetActiveContact( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppContact) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMainToolbarSlot( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppMainToolbarSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInputToolbarSlot( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppInputToolbarSlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertText2InputBox( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrUID,
            /* [in] */ BSTR bstrText,
            /* [in] */ LONG nType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InsertText2HistoryBox( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR contact_id,
            /* [in] */ BSTR notify_content,
            /* [in] */ LONG callbackId,
            /* [in] */ BSTR bstrCBBtnInfo,
            /* [in] */ VARIANT_BOOL bneedCallback,
            /* [in] */ VARIANT_BOOL bSysStyle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetExternRegion( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppExternRegion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlgChildWindowSize( 
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR contact_id,
            /* [in] */ LONG childtype,
            /* [out] */ LONG *x,
            /* [out] */ LONG *y,
            /* [out] */ LONG *dx,
            /* [retval][out] */ LONG *dy) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKChatDlgVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKChatDlg * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKChatDlg * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKChatDlg * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKChatDlg * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKChatDlg * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKChatDlg * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKChatDlg * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetActiveContact )( 
            ISDKChatDlg * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppContact);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKChatDlg * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMainToolbarSlot )( 
            ISDKChatDlg * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppMainToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInputToolbarSlot )( 
            ISDKChatDlg * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppInputToolbarSlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertText2InputBox )( 
            ISDKChatDlg * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR bstrUID,
            /* [in] */ BSTR bstrText,
            /* [in] */ LONG nType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InsertText2HistoryBox )( 
            ISDKChatDlg * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR contact_id,
            /* [in] */ BSTR notify_content,
            /* [in] */ LONG callbackId,
            /* [in] */ BSTR bstrCBBtnInfo,
            /* [in] */ VARIANT_BOOL bneedCallback,
            /* [in] */ VARIANT_BOOL bSysStyle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExternRegion )( 
            ISDKChatDlg * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppExternRegion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlgChildWindowSize )( 
            ISDKChatDlg * This,
            /* [in] */ LONG lCookie,
            /* [in] */ BSTR contact_id,
            /* [in] */ LONG childtype,
            /* [out] */ LONG *x,
            /* [out] */ LONG *y,
            /* [out] */ LONG *dx,
            /* [retval][out] */ LONG *dy);
        
        END_INTERFACE
    } ISDKChatDlgVtbl;

    interface ISDKChatDlg
    {
        CONST_VTBL struct ISDKChatDlgVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKChatDlg_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKChatDlg_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKChatDlg_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKChatDlg_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKChatDlg_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKChatDlg_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKChatDlg_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKChatDlg_GetActiveContact(This,lCookie,ppContact)	\
    ( (This)->lpVtbl -> GetActiveContact(This,lCookie,ppContact) ) 

#define ISDKChatDlg_GetApplication(This,lCookie,ppApplication)	\
    ( (This)->lpVtbl -> GetApplication(This,lCookie,ppApplication) ) 

#define ISDKChatDlg_GetMainToolbarSlot(This,lCookie,ppMainToolbarSlot)	\
    ( (This)->lpVtbl -> GetMainToolbarSlot(This,lCookie,ppMainToolbarSlot) ) 

#define ISDKChatDlg_GetInputToolbarSlot(This,lCookie,ppInputToolbarSlot)	\
    ( (This)->lpVtbl -> GetInputToolbarSlot(This,lCookie,ppInputToolbarSlot) ) 

#define ISDKChatDlg_InsertText2InputBox(This,lCookie,bstrUID,bstrText,nType)	\
    ( (This)->lpVtbl -> InsertText2InputBox(This,lCookie,bstrUID,bstrText,nType) ) 

#define ISDKChatDlg_InsertText2HistoryBox(This,lCookie,contact_id,notify_content,callbackId,bstrCBBtnInfo,bneedCallback,bSysStyle)	\
    ( (This)->lpVtbl -> InsertText2HistoryBox(This,lCookie,contact_id,notify_content,callbackId,bstrCBBtnInfo,bneedCallback,bSysStyle) ) 

#define ISDKChatDlg_GetExternRegion(This,lCookie,ppExternRegion)	\
    ( (This)->lpVtbl -> GetExternRegion(This,lCookie,ppExternRegion) ) 

#define ISDKChatDlg_GetChatDlgChildWindowSize(This,lCookie,contact_id,childtype,x,y,dx,dy)	\
    ( (This)->lpVtbl -> GetChatDlgChildWindowSize(This,lCookie,contact_id,childtype,x,y,dx,dy) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKChatDlg_INTERFACE_DEFINED__ */


#ifndef __ISDKContact_INTERFACE_DEFINED__
#define __ISDKContact_INTERFACE_DEFINED__

/* interface ISDKContact */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKContact;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DAE5A43-9FF4-4ce0-A00D-E92A2E2C425A")
    ISDKContact : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUserID( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrUID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNickName( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pNickName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSiteID( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pSiteID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSiteName( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pSiteName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInGroup( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppGroup) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ enum SDKContactStatus *lpStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPortrait( 
            /* [in] */ LONG lCookie,
            /* [in] */ LONG lImageSizeType,
            /* [in] */ LONG lIgnoreStatus,
            /* [retval][out] */ BSTR *pbstrPortrait) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatusImage( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrImage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKContactVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKContact * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKContact * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKContact * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKContact * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKContact * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKContact * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKContact * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserID )( 
            ISDKContact * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrUID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNickName )( 
            ISDKContact * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pNickName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSiteID )( 
            ISDKContact * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pSiteID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSiteName )( 
            ISDKContact * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pSiteName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInGroup )( 
            ISDKContact * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppGroup);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            ISDKContact * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ enum SDKContactStatus *lpStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPortrait )( 
            ISDKContact * This,
            /* [in] */ LONG lCookie,
            /* [in] */ LONG lImageSizeType,
            /* [in] */ LONG lIgnoreStatus,
            /* [retval][out] */ BSTR *pbstrPortrait);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusImage )( 
            ISDKContact * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pbstrImage);
        
        END_INTERFACE
    } ISDKContactVtbl;

    interface ISDKContact
    {
        CONST_VTBL struct ISDKContactVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKContact_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKContact_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKContact_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKContact_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKContact_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKContact_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKContact_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKContact_GetUserID(This,lCookie,pbstrUID)	\
    ( (This)->lpVtbl -> GetUserID(This,lCookie,pbstrUID) ) 

#define ISDKContact_GetNickName(This,lCookie,pNickName)	\
    ( (This)->lpVtbl -> GetNickName(This,lCookie,pNickName) ) 

#define ISDKContact_GetSiteID(This,lCookie,pSiteID)	\
    ( (This)->lpVtbl -> GetSiteID(This,lCookie,pSiteID) ) 

#define ISDKContact_GetSiteName(This,lCookie,pSiteName)	\
    ( (This)->lpVtbl -> GetSiteName(This,lCookie,pSiteName) ) 

#define ISDKContact_GetInGroup(This,lCookie,ppGroup)	\
    ( (This)->lpVtbl -> GetInGroup(This,lCookie,ppGroup) ) 

#define ISDKContact_GetStatus(This,lCookie,lpStatus)	\
    ( (This)->lpVtbl -> GetStatus(This,lCookie,lpStatus) ) 

#define ISDKContact_GetPortrait(This,lCookie,lImageSizeType,lIgnoreStatus,pbstrPortrait)	\
    ( (This)->lpVtbl -> GetPortrait(This,lCookie,lImageSizeType,lIgnoreStatus,pbstrPortrait) ) 

#define ISDKContact_GetStatusImage(This,lCookie,pbstrImage)	\
    ( (This)->lpVtbl -> GetStatusImage(This,lCookie,pbstrImage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKContact_INTERFACE_DEFINED__ */


#ifndef __ISDKIMChatInputToolbarSlot_INTERFACE_DEFINED__
#define __ISDKIMChatInputToolbarSlot_INTERFACE_DEFINED__

/* interface ISDKIMChatInputToolbarSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKIMChatInputToolbarSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("275CC9B8-0CA2-478c-812F-F4E42C06F1D0")
    ISDKIMChatInputToolbarSlot : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlg( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppChatDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKIMChatInputToolbarSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKIMChatInputToolbarSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKIMChatInputToolbarSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlg )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppChatDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKIMChatInputToolbarSlot * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        END_INTERFACE
    } ISDKIMChatInputToolbarSlotVtbl;

    interface ISDKIMChatInputToolbarSlot
    {
        CONST_VTBL struct ISDKIMChatInputToolbarSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKIMChatInputToolbarSlot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKIMChatInputToolbarSlot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKIMChatInputToolbarSlot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKIMChatInputToolbarSlot_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKIMChatInputToolbarSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKIMChatInputToolbarSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKIMChatInputToolbarSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKIMChatInputToolbarSlot_ShowItem(This,bShow,lItemCookie)	\
    ( (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie) ) 

#define ISDKIMChatInputToolbarSlot_EnableItem(This,bEnable,lItemCookie)	\
    ( (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie) ) 


#define ISDKIMChatInputToolbarSlot_GetChatDlg(This,lCookie,ppChatDlg)	\
    ( (This)->lpVtbl -> GetChatDlg(This,lCookie,ppChatDlg) ) 

#define ISDKIMChatInputToolbarSlot_GetApplication(This,lCookie,ppApplication)	\
    ( (This)->lpVtbl -> GetApplication(This,lCookie,ppApplication) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKIMChatInputToolbarSlot_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyOffline_INTERFACE_DEFINED__
#define __ISDKNotifyOffline_INTERFACE_DEFINED__

/* interface ISDKNotifyOffline */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyOffline;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7315843-A3C1-4081-9747-5FB92EC36F0F")
    ISDKNotifyOffline : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyOfflineVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyOffline * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyOffline * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyOffline * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyOffline * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyOffline * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyOffline * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyOffline * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ISDKNotifyOfflineVtbl;

    interface ISDKNotifyOffline
    {
        CONST_VTBL struct ISDKNotifyOfflineVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyOffline_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKNotifyOffline_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKNotifyOffline_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKNotifyOffline_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKNotifyOffline_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKNotifyOffline_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKNotifyOffline_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKNotifyOffline_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyChatMessage_INTERFACE_DEFINED__
#define __ISDKNotifyChatMessage_INTERFACE_DEFINED__

/* interface ISDKNotifyChatMessage */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyChatMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9E1DA6CB-30E2-45ED-88D1-5324F4DF0C1D")
    ISDKNotifyChatMessage : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_userId( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_userId( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_textMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_textMessage( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_receive( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_receive( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_time( 
            /* [retval][out] */ ULONGLONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_time( 
            /* [in] */ ULONGLONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_type( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyChatMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyChatMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyChatMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyChatMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_userId )( 
            ISDKNotifyChatMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_userId )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_textMessage )( 
            ISDKNotifyChatMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_textMessage )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_receive )( 
            ISDKNotifyChatMessage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_receive )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_time )( 
            ISDKNotifyChatMessage * This,
            /* [retval][out] */ ULONGLONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_time )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ ULONGLONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            ISDKNotifyChatMessage * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_type )( 
            ISDKNotifyChatMessage * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } ISDKNotifyChatMessageVtbl;

    interface ISDKNotifyChatMessage
    {
        CONST_VTBL struct ISDKNotifyChatMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyChatMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKNotifyChatMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKNotifyChatMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKNotifyChatMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKNotifyChatMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKNotifyChatMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKNotifyChatMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKNotifyChatMessage_get_userId(This,pVal)	\
    ( (This)->lpVtbl -> get_userId(This,pVal) ) 

#define ISDKNotifyChatMessage_put_userId(This,newVal)	\
    ( (This)->lpVtbl -> put_userId(This,newVal) ) 

#define ISDKNotifyChatMessage_get_textMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_textMessage(This,pVal) ) 

#define ISDKNotifyChatMessage_put_textMessage(This,newVal)	\
    ( (This)->lpVtbl -> put_textMessage(This,newVal) ) 

#define ISDKNotifyChatMessage_get_receive(This,pVal)	\
    ( (This)->lpVtbl -> get_receive(This,pVal) ) 

#define ISDKNotifyChatMessage_put_receive(This,newVal)	\
    ( (This)->lpVtbl -> put_receive(This,newVal) ) 

#define ISDKNotifyChatMessage_get_time(This,pVal)	\
    ( (This)->lpVtbl -> get_time(This,pVal) ) 

#define ISDKNotifyChatMessage_put_time(This,newVal)	\
    ( (This)->lpVtbl -> put_time(This,newVal) ) 

#define ISDKNotifyChatMessage_get_type(This,pVal)	\
    ( (This)->lpVtbl -> get_type(This,pVal) ) 

#define ISDKNotifyChatMessage_put_type(This,newVal)	\
    ( (This)->lpVtbl -> put_type(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKNotifyChatMessage_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyPlugMessage_INTERFACE_DEFINED__
#define __ISDKNotifyPlugMessage_INTERFACE_DEFINED__

/* interface ISDKNotifyPlugMessage */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyPlugMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B3888974-4B4B-4DD3-CD3A-E9956B72CC23")
    ISDKNotifyPlugMessage : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NotifyMessage( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NotifyMessage( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyPlugMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyPlugMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyPlugMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyPlugMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyPlugMessage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyPlugMessage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyPlugMessage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyPlugMessage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyMessage )( 
            ISDKNotifyPlugMessage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyMessage )( 
            ISDKNotifyPlugMessage * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISDKNotifyPlugMessageVtbl;

    interface ISDKNotifyPlugMessage
    {
        CONST_VTBL struct ISDKNotifyPlugMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyPlugMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKNotifyPlugMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKNotifyPlugMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKNotifyPlugMessage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKNotifyPlugMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKNotifyPlugMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKNotifyPlugMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKNotifyPlugMessage_get_NotifyMessage(This,pVal)	\
    ( (This)->lpVtbl -> get_NotifyMessage(This,pVal) ) 

#define ISDKNotifyPlugMessage_put_NotifyMessage(This,newVal)	\
    ( (This)->lpVtbl -> put_NotifyMessage(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKNotifyPlugMessage_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyContactTabChanging_INTERFACE_DEFINED__
#define __ISDKNotifyContactTabChanging_INTERFACE_DEFINED__

/* interface ISDKNotifyContactTabChanging */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyContactTabChanging;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B7E2380A-8C04-4E41-8418-3ED3F9A34000")
    ISDKNotifyContactTabChanging : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OldContact( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OldContact( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NewContact( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NewContact( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyContactTabChangingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyContactTabChanging * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyContactTabChanging * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyContactTabChanging * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OldContact )( 
            ISDKNotifyContactTabChanging * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OldContact )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewContact )( 
            ISDKNotifyContactTabChanging * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NewContact )( 
            ISDKNotifyContactTabChanging * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISDKNotifyContactTabChangingVtbl;

    interface ISDKNotifyContactTabChanging
    {
        CONST_VTBL struct ISDKNotifyContactTabChangingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyContactTabChanging_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKNotifyContactTabChanging_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKNotifyContactTabChanging_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKNotifyContactTabChanging_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKNotifyContactTabChanging_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKNotifyContactTabChanging_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKNotifyContactTabChanging_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKNotifyContactTabChanging_get_OldContact(This,pVal)	\
    ( (This)->lpVtbl -> get_OldContact(This,pVal) ) 

#define ISDKNotifyContactTabChanging_put_OldContact(This,newVal)	\
    ( (This)->lpVtbl -> put_OldContact(This,newVal) ) 

#define ISDKNotifyContactTabChanging_get_NewContact(This,pVal)	\
    ( (This)->lpVtbl -> get_NewContact(This,pVal) ) 

#define ISDKNotifyContactTabChanging_put_NewContact(This,newVal)	\
    ( (This)->lpVtbl -> put_NewContact(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKNotifyContactTabChanging_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyContactTabChanged_INTERFACE_DEFINED__
#define __ISDKNotifyContactTabChanged_INTERFACE_DEFINED__

/* interface ISDKNotifyContactTabChanged */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyContactTabChanged;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D9285ED-C9E8-40D4-8149-8EC3221DAA37")
    ISDKNotifyContactTabChanged : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OldContact( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OldContact( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NewContact( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NewContact( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyContactTabChangedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyContactTabChanged * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyContactTabChanged * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyContactTabChanged * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OldContact )( 
            ISDKNotifyContactTabChanged * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OldContact )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewContact )( 
            ISDKNotifyContactTabChanged * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NewContact )( 
            ISDKNotifyContactTabChanged * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISDKNotifyContactTabChangedVtbl;

    interface ISDKNotifyContactTabChanged
    {
        CONST_VTBL struct ISDKNotifyContactTabChangedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyContactTabChanged_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKNotifyContactTabChanged_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKNotifyContactTabChanged_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKNotifyContactTabChanged_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKNotifyContactTabChanged_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKNotifyContactTabChanged_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKNotifyContactTabChanged_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKNotifyContactTabChanged_get_OldContact(This,pVal)	\
    ( (This)->lpVtbl -> get_OldContact(This,pVal) ) 

#define ISDKNotifyContactTabChanged_put_OldContact(This,newVal)	\
    ( (This)->lpVtbl -> put_OldContact(This,newVal) ) 

#define ISDKNotifyContactTabChanged_get_NewContact(This,pVal)	\
    ( (This)->lpVtbl -> get_NewContact(This,pVal) ) 

#define ISDKNotifyContactTabChanged_put_NewContact(This,newVal)	\
    ( (This)->lpVtbl -> put_NewContact(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKNotifyContactTabChanged_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyContactInputboxContentChanged_INTERFACE_DEFINED__
#define __ISDKNotifyContactInputboxContentChanged_INTERFACE_DEFINED__

/* interface ISDKNotifyContactInputboxContentChanged */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyContactInputboxContentChanged;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8423503-8FAE-4090-8BA4-EFF1B8564261")
    ISDKNotifyContactInputboxContentChanged : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NewContent( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NewContent( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPos( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartPos( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyContactInputboxContentChangedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyContactInputboxContentChanged * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyContactInputboxContentChanged * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyContactInputboxContentChanged * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyContactInputboxContentChanged * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyContactInputboxContentChanged * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyContactInputboxContentChanged * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyContactInputboxContentChanged * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewContent )( 
            ISDKNotifyContactInputboxContentChanged * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NewContent )( 
            ISDKNotifyContactInputboxContentChanged * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPos )( 
            ISDKNotifyContactInputboxContentChanged * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartPos )( 
            ISDKNotifyContactInputboxContentChanged * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } ISDKNotifyContactInputboxContentChangedVtbl;

    interface ISDKNotifyContactInputboxContentChanged
    {
        CONST_VTBL struct ISDKNotifyContactInputboxContentChangedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyContactInputboxContentChanged_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKNotifyContactInputboxContentChanged_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKNotifyContactInputboxContentChanged_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKNotifyContactInputboxContentChanged_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKNotifyContactInputboxContentChanged_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKNotifyContactInputboxContentChanged_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKNotifyContactInputboxContentChanged_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKNotifyContactInputboxContentChanged_get_NewContent(This,pVal)	\
    ( (This)->lpVtbl -> get_NewContent(This,pVal) ) 

#define ISDKNotifyContactInputboxContentChanged_put_NewContent(This,newVal)	\
    ( (This)->lpVtbl -> put_NewContent(This,newVal) ) 

#define ISDKNotifyContactInputboxContentChanged_get_StartPos(This,pVal)	\
    ( (This)->lpVtbl -> get_StartPos(This,pVal) ) 

#define ISDKNotifyContactInputboxContentChanged_put_StartPos(This,newVal)	\
    ( (This)->lpVtbl -> put_StartPos(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKNotifyContactInputboxContentChanged_INTERFACE_DEFINED__ */


#ifndef __ISDKGroup_INTERFACE_DEFINED__
#define __ISDKGroup_INTERFACE_DEFINED__

/* interface ISDKGroup */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6586EF06-F071-4944-8D13-1C198B943A47")
    ISDKGroup : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetParentGroup( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppSDKGroup) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSubGroupCollection( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppGroupCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetContactCollection( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppContactCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGroupID( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pGroupID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGroupName( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pGroupName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOrderedGroups( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppGroupCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOrderedContacts( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppContactCollection) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKGroup * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKGroup * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKGroup * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKGroup * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKGroup * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetParentGroup )( 
            ISDKGroup * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppSDKGroup);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSubGroupCollection )( 
            ISDKGroup * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppGroupCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetContactCollection )( 
            ISDKGroup * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppContactCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGroupID )( 
            ISDKGroup * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pGroupID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGroupName )( 
            ISDKGroup * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ BSTR *pGroupName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOrderedGroups )( 
            ISDKGroup * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppGroupCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOrderedContacts )( 
            ISDKGroup * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ ISDKObjectCollection **ppContactCollection);
        
        END_INTERFACE
    } ISDKGroupVtbl;

    interface ISDKGroup
    {
        CONST_VTBL struct ISDKGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKGroup_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKGroup_GetParentGroup(This,lCookie,ppSDKGroup)	\
    ( (This)->lpVtbl -> GetParentGroup(This,lCookie,ppSDKGroup) ) 

#define ISDKGroup_GetSubGroupCollection(This,lCookie,ppGroupCollection)	\
    ( (This)->lpVtbl -> GetSubGroupCollection(This,lCookie,ppGroupCollection) ) 

#define ISDKGroup_GetContactCollection(This,lCookie,ppContactCollection)	\
    ( (This)->lpVtbl -> GetContactCollection(This,lCookie,ppContactCollection) ) 

#define ISDKGroup_GetGroupID(This,lCookie,pGroupID)	\
    ( (This)->lpVtbl -> GetGroupID(This,lCookie,pGroupID) ) 

#define ISDKGroup_GetGroupName(This,lCookie,pGroupName)	\
    ( (This)->lpVtbl -> GetGroupName(This,lCookie,pGroupName) ) 

#define ISDKGroup_GetOrderedGroups(This,lCookie,ppGroupCollection)	\
    ( (This)->lpVtbl -> GetOrderedGroups(This,lCookie,ppGroupCollection) ) 

#define ISDKGroup_GetOrderedContacts(This,lCookie,ppContactCollection)	\
    ( (This)->lpVtbl -> GetOrderedContacts(This,lCookie,ppContactCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKGroup_INTERFACE_DEFINED__ */


#ifndef __ISDKEServiceInputToolbarSlot_INTERFACE_DEFINED__
#define __ISDKEServiceInputToolbarSlot_INTERFACE_DEFINED__

/* interface ISDKEServiceInputToolbarSlot */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKEServiceInputToolbarSlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3391FB33-9338-4635-88E2-27ADBBAD849F")
    ISDKEServiceInputToolbarSlot : public ISDKSlot
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChatDlg( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppChatDlg) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKEServiceInputToolbarSlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKEServiceInputToolbarSlot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKEServiceInputToolbarSlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKEServiceInputToolbarSlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKEServiceInputToolbarSlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKEServiceInputToolbarSlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKEServiceInputToolbarSlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKEServiceInputToolbarSlot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowItem )( 
            ISDKEServiceInputToolbarSlot * This,
            /* [in] */ VARIANT_BOOL bShow,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableItem )( 
            ISDKEServiceInputToolbarSlot * This,
            /* [in] */ VARIANT_BOOL bEnable,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChatDlg )( 
            ISDKEServiceInputToolbarSlot * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppChatDlg);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            ISDKEServiceInputToolbarSlot * This,
            /* [in] */ LONG lCookie,
            /* [retval][out] */ IDispatch **ppApplication);
        
        END_INTERFACE
    } ISDKEServiceInputToolbarSlotVtbl;

    interface ISDKEServiceInputToolbarSlot
    {
        CONST_VTBL struct ISDKEServiceInputToolbarSlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKEServiceInputToolbarSlot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKEServiceInputToolbarSlot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKEServiceInputToolbarSlot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKEServiceInputToolbarSlot_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKEServiceInputToolbarSlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKEServiceInputToolbarSlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKEServiceInputToolbarSlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKEServiceInputToolbarSlot_ShowItem(This,bShow,lItemCookie)	\
    ( (This)->lpVtbl -> ShowItem(This,bShow,lItemCookie) ) 

#define ISDKEServiceInputToolbarSlot_EnableItem(This,bEnable,lItemCookie)	\
    ( (This)->lpVtbl -> EnableItem(This,bEnable,lItemCookie) ) 


#define ISDKEServiceInputToolbarSlot_GetChatDlg(This,lCookie,ppChatDlg)	\
    ( (This)->lpVtbl -> GetChatDlg(This,lCookie,ppChatDlg) ) 

#define ISDKEServiceInputToolbarSlot_GetApplication(This,lCookie,ppApplication)	\
    ( (This)->lpVtbl -> GetApplication(This,lCookie,ppApplication) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKEServiceInputToolbarSlot_INTERFACE_DEFINED__ */


#ifndef __ISDKCommonParam_INTERFACE_DEFINED__
#define __ISDKCommonParam_INTERFACE_DEFINED__

/* interface ISDKCommonParam */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKCommonParam;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("670E0F43-BEDE-4804-A30D-B9C4B942C34D")
    ISDKCommonParam : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Set_Param( 
            /* [in] */ const VARIANT *var) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Get_Param( 
            /* [retval][out] */ VARIANT *var) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKCommonParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKCommonParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKCommonParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKCommonParam * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKCommonParam * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKCommonParam * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKCommonParam * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKCommonParam * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Set_Param )( 
            ISDKCommonParam * This,
            /* [in] */ const VARIANT *var);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Get_Param )( 
            ISDKCommonParam * This,
            /* [retval][out] */ VARIANT *var);
        
        END_INTERFACE
    } ISDKCommonParamVtbl;

    interface ISDKCommonParam
    {
        CONST_VTBL struct ISDKCommonParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKCommonParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKCommonParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKCommonParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKCommonParam_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKCommonParam_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKCommonParam_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKCommonParam_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKCommonParam_Set_Param(This,var)	\
    ( (This)->lpVtbl -> Set_Param(This,var) ) 

#define ISDKCommonParam_Get_Param(This,var)	\
    ( (This)->lpVtbl -> Get_Param(This,var) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKCommonParam_INTERFACE_DEFINED__ */


#ifndef __ISDKPluginMainDlg_INTERFACE_DEFINED__
#define __ISDKPluginMainDlg_INTERFACE_DEFINED__

/* interface ISDKPluginMainDlg */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKPluginMainDlg;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E207A678-6F94-4CEA-A605-CB91B9F9617D")
    ISDKPluginMainDlg : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHwnd( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ LONGLONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartPluginMainDlg( 
            /* [in] */ LONG lPluginCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowPluginMainDlg( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ VARIANT_BOOL bShow) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPluginDlgPos( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG cx,
            /* [in] */ LONG cy,
            /* [in] */ LONG flag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPluginDlgFixedBorder( 
            /* [in] */ LONG lPluginCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPluginDlgBOOLProperty( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR propertyName,
            /* [in] */ VARIANT_BOOL bVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPluginDlgINTProperty( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR propertyName,
            /* [in] */ LONG bVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPluginDlgStringProperty( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR propertyName,
            /* [in] */ BSTR bVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsCurrentSelectedPlugin( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKPluginMainDlgVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKPluginMainDlg * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKPluginMainDlg * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKPluginMainDlg * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKPluginMainDlg * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKPluginMainDlg * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKPluginMainDlg * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKPluginMainDlg * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHwnd )( 
            ISDKPluginMainDlg * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ LONGLONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartPluginMainDlg )( 
            ISDKPluginMainDlg * This,
            /* [in] */ LONG lPluginCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowPluginMainDlg )( 
            ISDKPluginMainDlg * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ VARIANT_BOOL bShow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPluginDlgPos )( 
            ISDKPluginMainDlg * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [in] */ LONG cx,
            /* [in] */ LONG cy,
            /* [in] */ LONG flag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPluginDlgFixedBorder )( 
            ISDKPluginMainDlg * This,
            /* [in] */ LONG lPluginCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPluginDlgBOOLProperty )( 
            ISDKPluginMainDlg * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR propertyName,
            /* [in] */ VARIANT_BOOL bVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPluginDlgINTProperty )( 
            ISDKPluginMainDlg * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR propertyName,
            /* [in] */ LONG bVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPluginDlgStringProperty )( 
            ISDKPluginMainDlg * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ BSTR propertyName,
            /* [in] */ BSTR bVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsCurrentSelectedPlugin )( 
            ISDKPluginMainDlg * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } ISDKPluginMainDlgVtbl;

    interface ISDKPluginMainDlg
    {
        CONST_VTBL struct ISDKPluginMainDlgVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKPluginMainDlg_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKPluginMainDlg_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKPluginMainDlg_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKPluginMainDlg_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKPluginMainDlg_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKPluginMainDlg_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKPluginMainDlg_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKPluginMainDlg_GetHwnd(This,lPluginCookie,pVal)	\
    ( (This)->lpVtbl -> GetHwnd(This,lPluginCookie,pVal) ) 

#define ISDKPluginMainDlg_StartPluginMainDlg(This,lPluginCookie)	\
    ( (This)->lpVtbl -> StartPluginMainDlg(This,lPluginCookie) ) 

#define ISDKPluginMainDlg_ShowPluginMainDlg(This,lPluginCookie,bShow)	\
    ( (This)->lpVtbl -> ShowPluginMainDlg(This,lPluginCookie,bShow) ) 

#define ISDKPluginMainDlg_SetPluginDlgPos(This,lPluginCookie,x,y,cx,cy,flag)	\
    ( (This)->lpVtbl -> SetPluginDlgPos(This,lPluginCookie,x,y,cx,cy,flag) ) 

#define ISDKPluginMainDlg_SetPluginDlgFixedBorder(This,lPluginCookie)	\
    ( (This)->lpVtbl -> SetPluginDlgFixedBorder(This,lPluginCookie) ) 

#define ISDKPluginMainDlg_SetPluginDlgBOOLProperty(This,lPluginCookie,propertyName,bVal)	\
    ( (This)->lpVtbl -> SetPluginDlgBOOLProperty(This,lPluginCookie,propertyName,bVal) ) 

#define ISDKPluginMainDlg_SetPluginDlgINTProperty(This,lPluginCookie,propertyName,bVal)	\
    ( (This)->lpVtbl -> SetPluginDlgINTProperty(This,lPluginCookie,propertyName,bVal) ) 

#define ISDKPluginMainDlg_SetPluginDlgStringProperty(This,lPluginCookie,propertyName,bVal)	\
    ( (This)->lpVtbl -> SetPluginDlgStringProperty(This,lPluginCookie,propertyName,bVal) ) 

#define ISDKPluginMainDlg_IsCurrentSelectedPlugin(This,lPluginCookie,pVal)	\
    ( (This)->lpVtbl -> IsCurrentSelectedPlugin(This,lPluginCookie,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKPluginMainDlg_INTERFACE_DEFINED__ */


#ifndef __ISDKNotifyTradeInfo_INTERFACE_DEFINED__
#define __ISDKNotifyTradeInfo_INTERFACE_DEFINED__

/* interface ISDKNotifyTradeInfo */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKNotifyTradeInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EAE07C36-5D44-442A-8130-177DA03E8BB9")
    ISDKNotifyTradeInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_type( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_gids( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_gids( 
            /* [in] */ IUnknown *newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_user( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_user( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKNotifyTradeInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKNotifyTradeInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKNotifyTradeInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKNotifyTradeInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKNotifyTradeInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKNotifyTradeInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKNotifyTradeInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKNotifyTradeInfo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            ISDKNotifyTradeInfo * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_type )( 
            ISDKNotifyTradeInfo * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_gids )( 
            ISDKNotifyTradeInfo * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_gids )( 
            ISDKNotifyTradeInfo * This,
            /* [in] */ IUnknown *newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_user )( 
            ISDKNotifyTradeInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_user )( 
            ISDKNotifyTradeInfo * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ISDKNotifyTradeInfoVtbl;

    interface ISDKNotifyTradeInfo
    {
        CONST_VTBL struct ISDKNotifyTradeInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKNotifyTradeInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKNotifyTradeInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKNotifyTradeInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKNotifyTradeInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKNotifyTradeInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKNotifyTradeInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKNotifyTradeInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKNotifyTradeInfo_get_type(This,pVal)	\
    ( (This)->lpVtbl -> get_type(This,pVal) ) 

#define ISDKNotifyTradeInfo_put_type(This,newVal)	\
    ( (This)->lpVtbl -> put_type(This,newVal) ) 

#define ISDKNotifyTradeInfo_get_gids(This,pVal)	\
    ( (This)->lpVtbl -> get_gids(This,pVal) ) 

#define ISDKNotifyTradeInfo_put_gids(This,newVal)	\
    ( (This)->lpVtbl -> put_gids(This,newVal) ) 

#define ISDKNotifyTradeInfo_get_user(This,pVal)	\
    ( (This)->lpVtbl -> get_user(This,pVal) ) 

#define ISDKNotifyTradeInfo_put_user(This,newVal)	\
    ( (This)->lpVtbl -> put_user(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKNotifyTradeInfo_INTERFACE_DEFINED__ */


#ifndef __ISDKEServiceProperty_INTERFACE_DEFINED__
#define __ISDKEServiceProperty_INTERFACE_DEFINED__

/* interface ISDKEServiceProperty */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKEServiceProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5704D7C5-F460-4B9C-AB44-56312E5FB28B")
    ISDKEServiceProperty : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHangupStatus( 
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ VARIANT_BOOL *pbHungUp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetHangupStatus( 
            /* [in] */ LONG lPluginCookie,
            /* [in] */ VARIANT_BOOL bHungUp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKEServicePropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKEServiceProperty * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKEServiceProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKEServiceProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKEServiceProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKEServiceProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKEServiceProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKEServiceProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHangupStatus )( 
            ISDKEServiceProperty * This,
            /* [in] */ LONG lPluginCookie,
            /* [retval][out] */ VARIANT_BOOL *pbHungUp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetHangupStatus )( 
            ISDKEServiceProperty * This,
            /* [in] */ LONG lPluginCookie,
            /* [in] */ VARIANT_BOOL bHungUp);
        
        END_INTERFACE
    } ISDKEServicePropertyVtbl;

    interface ISDKEServiceProperty
    {
        CONST_VTBL struct ISDKEServicePropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKEServiceProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKEServiceProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKEServiceProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKEServiceProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKEServiceProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKEServiceProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKEServiceProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKEServiceProperty_GetHangupStatus(This,lPluginCookie,pbHungUp)	\
    ( (This)->lpVtbl -> GetHangupStatus(This,lPluginCookie,pbHungUp) ) 

#define ISDKEServiceProperty_SetHangupStatus(This,lPluginCookie,bHungUp)	\
    ( (This)->lpVtbl -> SetHangupStatus(This,lPluginCookie,bHungUp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKEServiceProperty_INTERFACE_DEFINED__ */



#ifndef __wwsdkcomLib_LIBRARY_DEFINED__
#define __wwsdkcomLib_LIBRARY_DEFINED__

/* library wwsdkcomLib */
/* [helpstring][version][uuid] */ 


enum SDKSlotID
    {	SLOTID_IMCHATINPUTTOOLBARSLOT	= 4,
	SLOTID_ESERVICEINPUTTOOLBARSLOT	= 10
    } ;

enum SDKMessageID
    {	NOTIFY_OFFLINE	= 1,
	NOTIFY_CHATMESSAGE	= 3,
	NOTIFY_SESSION_KEY	= 30,
	NOTIFY_PLUGIN_MSG_BACK	= 31,
	NOTIFY_PLUGIN_CALLBACK	= 32,
	NOTIFY_ESERVICE_HANGUP_BACK	= 33,
	NOTIFY_WORKBENCH_OPEN	= 40,
	NOTIFY_WORKBENCH_CLOSE	= 41,
	NOTIFY_PLUGIN_MAINDLG_READY	= 42,
	NOTIFY_PLUGIN_TAB_ACTIVED	= 43,
	NOTIFY_PLUGIN_TAB_WNDSIZED	= 44
    } ;

enum SDKItemNotifyID
    {	NOTIFY_CONTACT_TAB_CHANGING	= 0,
	NOTIFY_CONTACT_TAB_CHANGED	= 1,
	NOTIFY_TRADE_FOCUS	= 6,
	NOTIFY_CONTACT_CLOSE	= 7,
	NOTIFY_CONTACT_INPUTBOX_CONTENT_CHANGED	= 8,
	NOTIFY_TRANSFER_CONTACT	= 9,
	NOTIFY_ESERVICE_DLG_SIZE_CHANGE	= 10,
	NOTIFY_ESERVICE_PLUGIN_HOTKEY	= 11
    } ;

enum SDKContactStatus
    {	STATUS_OFFLINE	= 0,
	STATUS_ONLINE	= 1,
	STATUS_MOBILEONLINE	= 2,
	STATUS_BUSY	= 3,
	STATUS_AWAY	= 4,
	STATUS_INCALL	= 5,
	STATUS_OUTFORDINNER	= 6,
	STATUS_WAIT	= 7
    } ;

enum TradeInfoType
    {	TRADE_INFO_TYPE_ORDER	= 0,
	TRADE_INFO_TYPE_GOODS	= ( TRADE_INFO_TYPE_ORDER + 1 ) 
    } ;

enum ChatMsgType
    {	CHAT_MSG_NORMAL	= 0,
	CHAT_MSG_AUTOREPLY	= ( CHAT_MSG_NORMAL + 1 ) ,
	CHAT_MSG_PLUGIN	= ( CHAT_MSG_AUTOREPLY + 1 ) 
    } ;

enum SDKProxyType
    {	SDK_None_ProxyType	= 0,
	SDK_Socket4_ProxyType	= ( SDK_None_ProxyType + 1 ) ,
	SDK_Socket4A_ProxyType	= ( SDK_Socket4_ProxyType + 1 ) ,
	SDK_Socket5_ProxyType	= ( SDK_Socket4A_ProxyType + 1 ) ,
	SDK_Http11_ProxyType	= ( SDK_Socket5_ProxyType + 1 ) ,
	SDK_IE_ProxyType	= ( SDK_Http11_ProxyType + 1 ) 
    } ;

EXTERN_C const IID LIBID_wwsdkcomLib;

#ifndef __ISDKPlugin2_INTERFACE_DEFINED__
#define __ISDKPlugin2_INTERFACE_DEFINED__

/* interface ISDKPlugin2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKPlugin2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("205D5A1E-B245-43dc-A7C5-C0C6D663C164")
    ISDKPlugin2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnConnect( 
            /* [in] */ IDispatch *pApplication2,
            /* [in] */ LONG lCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDisconnect( 
            /* [in] */ IDispatch *pApplication2,
            /* [in] */ LONG lCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNotify( 
            /* [in] */ enum SDKMessageID MsgID,
            /* [in] */ IDispatch *pParam) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUninstall( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKPlugin2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKPlugin2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKPlugin2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKPlugin2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKPlugin2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKPlugin2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKPlugin2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKPlugin2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnConnect )( 
            ISDKPlugin2 * This,
            /* [in] */ IDispatch *pApplication2,
            /* [in] */ LONG lCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDisconnect )( 
            ISDKPlugin2 * This,
            /* [in] */ IDispatch *pApplication2,
            /* [in] */ LONG lCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNotify )( 
            ISDKPlugin2 * This,
            /* [in] */ enum SDKMessageID MsgID,
            /* [in] */ IDispatch *pParam);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUninstall )( 
            ISDKPlugin2 * This);
        
        END_INTERFACE
    } ISDKPlugin2Vtbl;

    interface ISDKPlugin2
    {
        CONST_VTBL struct ISDKPlugin2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKPlugin2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKPlugin2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKPlugin2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKPlugin2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKPlugin2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKPlugin2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKPlugin2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKPlugin2_OnConnect(This,pApplication2,lCookie)	\
    ( (This)->lpVtbl -> OnConnect(This,pApplication2,lCookie) ) 

#define ISDKPlugin2_OnDisconnect(This,pApplication2,lCookie)	\
    ( (This)->lpVtbl -> OnDisconnect(This,pApplication2,lCookie) ) 

#define ISDKPlugin2_OnNotify(This,MsgID,pParam)	\
    ( (This)->lpVtbl -> OnNotify(This,MsgID,pParam) ) 

#define ISDKPlugin2_OnUninstall(This)	\
    ( (This)->lpVtbl -> OnUninstall(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKPlugin2_INTERFACE_DEFINED__ */


#ifndef __ISDKPluginItem_INTERFACE_DEFINED__
#define __ISDKPluginItem_INTERFACE_DEFINED__

/* interface ISDKPluginItem */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISDKPluginItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62BF5E6F-9FAA-4083-AC26-771C64C3E203")
    ISDKPluginItem : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCreate( 
            /* [in] */ IDispatch *pSlot,
            /* [in] */ LONG hParentWnd,
            /* [in] */ LONG lItemCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDestroy( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNotify( 
            /* [in] */ enum SDKItemNotifyID MsgID,
            /* [in] */ IDispatch *pParam) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClick( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSize( 
            /* [in] */ int cx,
            /* [in] */ int cy) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnMenuClick( 
            /* [in] */ LONG lCmdID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISDKPluginItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISDKPluginItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISDKPluginItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISDKPluginItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISDKPluginItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISDKPluginItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISDKPluginItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISDKPluginItem * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCreate )( 
            ISDKPluginItem * This,
            /* [in] */ IDispatch *pSlot,
            /* [in] */ LONG hParentWnd,
            /* [in] */ LONG lItemCookie);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDestroy )( 
            ISDKPluginItem * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNotify )( 
            ISDKPluginItem * This,
            /* [in] */ enum SDKItemNotifyID MsgID,
            /* [in] */ IDispatch *pParam);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClick )( 
            ISDKPluginItem * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSize )( 
            ISDKPluginItem * This,
            /* [in] */ int cx,
            /* [in] */ int cy);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnMenuClick )( 
            ISDKPluginItem * This,
            /* [in] */ LONG lCmdID);
        
        END_INTERFACE
    } ISDKPluginItemVtbl;

    interface ISDKPluginItem
    {
        CONST_VTBL struct ISDKPluginItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISDKPluginItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISDKPluginItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISDKPluginItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISDKPluginItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISDKPluginItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISDKPluginItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISDKPluginItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISDKPluginItem_OnCreate(This,pSlot,hParentWnd,lItemCookie)	\
    ( (This)->lpVtbl -> OnCreate(This,pSlot,hParentWnd,lItemCookie) ) 

#define ISDKPluginItem_OnDestroy(This)	\
    ( (This)->lpVtbl -> OnDestroy(This) ) 

#define ISDKPluginItem_OnNotify(This,MsgID,pParam)	\
    ( (This)->lpVtbl -> OnNotify(This,MsgID,pParam) ) 

#define ISDKPluginItem_OnClick(This)	\
    ( (This)->lpVtbl -> OnClick(This) ) 

#define ISDKPluginItem_OnSize(This,cx,cy)	\
    ( (This)->lpVtbl -> OnSize(This,cx,cy) ) 

#define ISDKPluginItem_OnMenuClick(This,lCmdID)	\
    ( (This)->lpVtbl -> OnMenuClick(This,lCmdID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISDKPluginItem_INTERFACE_DEFINED__ */

#endif /* __wwsdkcomLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


