

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Feb 04 18:06:02 2013
 */
/* Compiler settings for uomschat.idl:
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


#ifndef __uomschat_i_h__
#define __uomschat_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __PluginItemHost_FWD_DEFINED__
#define __PluginItemHost_FWD_DEFINED__

#ifdef __cplusplus
typedef class PluginItemHost PluginItemHost;
#else
typedef struct PluginItemHost PluginItemHost;
#endif /* __cplusplus */

#endif 	/* __PluginItemHost_FWD_DEFINED__ */


#ifndef __MessageReceiver_FWD_DEFINED__
#define __MessageReceiver_FWD_DEFINED__

#ifdef __cplusplus
typedef class MessageReceiver MessageReceiver;
#else
typedef struct MessageReceiver MessageReceiver;
#endif /* __cplusplus */

#endif 	/* __MessageReceiver_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "wwsdkcom_forPlugin.h"
#include "messaging.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __uomschatLib_LIBRARY_DEFINED__
#define __uomschatLib_LIBRARY_DEFINED__

/* library uomschatLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_uomschatLib;

EXTERN_C const CLSID CLSID_PluginItemHost;

#ifdef __cplusplus

class DECLSPEC_UUID("9F2A7386-C01C-4AB5-828C-DD428D43BB81")
PluginItemHost;
#endif

EXTERN_C const CLSID CLSID_MessageReceiver;

#ifdef __cplusplus

class DECLSPEC_UUID("B737AAF5-0A73-49A2-BF6A-F5DFA470A847")
MessageReceiver;
#endif
#endif /* __uomschatLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


