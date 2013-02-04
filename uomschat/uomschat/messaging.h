

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Feb 04 18:06:01 2013
 */
/* Compiler settings for messaging.idl:
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

#ifndef __messaging_h__
#define __messaging_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMessageSource_FWD_DEFINED__
#define __IMessageSource_FWD_DEFINED__
typedef interface IMessageSource IMessageSource;
#endif 	/* __IMessageSource_FWD_DEFINED__ */


#ifndef __IMessageListener_FWD_DEFINED__
#define __IMessageListener_FWD_DEFINED__
typedef interface IMessageListener IMessageListener;
#endif 	/* __IMessageListener_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "wwsdkcom_forPlugin.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_messaging_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_messaging_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_messaging_0000_0000_v0_0_s_ifspec;

#ifndef __IMessageSource_INTERFACE_DEFINED__
#define __IMessageSource_INTERFACE_DEFINED__

/* interface IMessageSource */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMessageSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("102947DB-3258-43D8-953C-5F64F51FBF1E")
    IMessageSource : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddListener( 
            /* [in] */ IMessageListener *pListener) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveListener( 
            /* [in] */ IMessageListener *pListener) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessageSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessageSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessageSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessageSource * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddListener )( 
            IMessageSource * This,
            /* [in] */ IMessageListener *pListener);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveListener )( 
            IMessageSource * This,
            /* [in] */ IMessageListener *pListener);
        
        END_INTERFACE
    } IMessageSourceVtbl;

    interface IMessageSource
    {
        CONST_VTBL struct IMessageSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessageSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessageSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessageSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessageSource_AddListener(This,pListener)	\
    ( (This)->lpVtbl -> AddListener(This,pListener) ) 

#define IMessageSource_RemoveListener(This,pListener)	\
    ( (This)->lpVtbl -> RemoveListener(This,pListener) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessageSource_INTERFACE_DEFINED__ */


#ifndef __IMessageListener_INTERFACE_DEFINED__
#define __IMessageListener_INTERFACE_DEFINED__

/* interface IMessageListener */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMessageListener;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FABF9E4E-E533-4826-A76B-046FC0D070D5")
    IMessageListener : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnMessage( 
            /* [in] */ enum SDKMessageID MsgID,
            /* [in] */ IDispatch *pParam) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMessageListenerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessageListener * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessageListener * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessageListener * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnMessage )( 
            IMessageListener * This,
            /* [in] */ enum SDKMessageID MsgID,
            /* [in] */ IDispatch *pParam);
        
        END_INTERFACE
    } IMessageListenerVtbl;

    interface IMessageListener
    {
        CONST_VTBL struct IMessageListenerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessageListener_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessageListener_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessageListener_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessageListener_OnMessage(This,MsgID,pParam)	\
    ( (This)->lpVtbl -> OnMessage(This,MsgID,pParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessageListener_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


