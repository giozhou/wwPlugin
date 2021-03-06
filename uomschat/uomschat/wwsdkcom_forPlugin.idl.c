

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Feb 01 00:12:42 2013
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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISDKApplication,0x3F10F026,0x1071,0x4a68,0x97,0x15,0x10,0x0B,0xB3,0x95,0xAE,0xE2);


MIDL_DEFINE_GUID(IID, IID_ISDKContactMgr,0x2407B285,0xEABE,0x4940,0x92,0x01,0x6F,0xA0,0xE7,0x65,0xC3,0x2F);


MIDL_DEFINE_GUID(IID, IID_ISDKLoginUser,0xCF93245E,0x17D7,0x48ba,0x96,0x78,0xDB,0x25,0xB9,0xA0,0xAB,0xCD);


MIDL_DEFINE_GUID(IID, IID_ISDKEServiceDlg,0x685D5C4D,0x8366,0x4CF5,0x96,0x97,0x85,0x93,0x96,0xAB,0x3A,0x28);


MIDL_DEFINE_GUID(IID, IID_ISDKChatDlgMgr,0x8AF53472,0x56D3,0x4838,0xBD,0x3C,0xE8,0x28,0x4E,0x5C,0x8D,0x22);


MIDL_DEFINE_GUID(IID, IID_ISDKObjectCollection,0x1AE3F1AB,0x06ED,0x42C6,0xAE,0xBB,0x87,0xDA,0x83,0x1B,0xF7,0x3B);


MIDL_DEFINE_GUID(IID, IID_ISDKSlot,0x7974CE15,0xA974,0x48ce,0xAD,0x3F,0x19,0xC0,0xA7,0xF7,0x15,0xDE);


MIDL_DEFINE_GUID(IID, IID_ISDKChatDlg,0xA6084910,0xACFE,0x49ce,0x9B,0x76,0xB8,0x71,0xCC,0x22,0x7F,0xF6);


MIDL_DEFINE_GUID(IID, IID_ISDKContact,0x9DAE5A43,0x9FF4,0x4ce0,0xA0,0x0D,0xE9,0x2A,0x2E,0x2C,0x42,0x5A);


MIDL_DEFINE_GUID(IID, IID_ISDKIMChatInputToolbarSlot,0x275CC9B8,0x0CA2,0x478c,0x81,0x2F,0xF4,0xE4,0x2C,0x06,0xF1,0xD0);


MIDL_DEFINE_GUID(IID, IID_ISDKNotifyOffline,0xE7315843,0xA3C1,0x4081,0x97,0x47,0x5F,0xB9,0x2E,0xC3,0x6F,0x0F);


MIDL_DEFINE_GUID(IID, IID_ISDKNotifyChatMessage,0x9E1DA6CB,0x30E2,0x45ED,0x88,0xD1,0x53,0x24,0xF4,0xDF,0x0C,0x1D);


MIDL_DEFINE_GUID(IID, IID_ISDKNotifyPlugMessage,0xB3888974,0x4B4B,0x4DD3,0xCD,0x3A,0xE9,0x95,0x6B,0x72,0xCC,0x23);


MIDL_DEFINE_GUID(IID, IID_ISDKNotifyContactTabChanging,0xB7E2380A,0x8C04,0x4E41,0x84,0x18,0x3E,0xD3,0xF9,0xA3,0x40,0x00);


MIDL_DEFINE_GUID(IID, IID_ISDKNotifyContactTabChanged,0x1D9285ED,0xC9E8,0x40D4,0x81,0x49,0x8E,0xC3,0x22,0x1D,0xAA,0x37);


MIDL_DEFINE_GUID(IID, IID_ISDKNotifyContactInputboxContentChanged,0xB8423503,0x8FAE,0x4090,0x8B,0xA4,0xEF,0xF1,0xB8,0x56,0x42,0x61);


MIDL_DEFINE_GUID(IID, IID_ISDKGroup,0x6586EF06,0xF071,0x4944,0x8D,0x13,0x1C,0x19,0x8B,0x94,0x3A,0x47);


MIDL_DEFINE_GUID(IID, IID_ISDKEServiceInputToolbarSlot,0x3391FB33,0x9338,0x4635,0x88,0xE2,0x27,0xAD,0xBB,0xAD,0x84,0x9F);


MIDL_DEFINE_GUID(IID, IID_ISDKCommonParam,0x670E0F43,0xBEDE,0x4804,0xA3,0x0D,0xB9,0xC4,0xB9,0x42,0xC3,0x4D);


MIDL_DEFINE_GUID(IID, IID_ISDKPluginMainDlg,0xE207A678,0x6F94,0x4CEA,0xA6,0x05,0xCB,0x91,0xB9,0xF9,0x61,0x7D);


MIDL_DEFINE_GUID(IID, IID_ISDKNotifyTradeInfo,0xEAE07C36,0x5D44,0x442A,0x81,0x30,0x17,0x7D,0xA0,0x3E,0x8B,0xB9);


MIDL_DEFINE_GUID(IID, IID_ISDKEServiceProperty,0x5704D7C5,0xF460,0x4B9C,0xAB,0x44,0x56,0x31,0x2E,0x5F,0xB2,0x8B);


MIDL_DEFINE_GUID(IID, LIBID_wwsdkcomLib,0x044FEC04,0xC415,0x40AF,0xAD,0x34,0xF4,0x4F,0x62,0xDA,0x65,0xA3);


MIDL_DEFINE_GUID(IID, IID_ISDKPlugin2,0x205D5A1E,0xB245,0x43dc,0xA7,0xC5,0xC0,0xC6,0xD6,0x63,0xC1,0x64);


MIDL_DEFINE_GUID(IID, IID_ISDKPluginItem,0x62BF5E6F,0x9FAA,0x4083,0xAC,0x26,0x77,0x1C,0x64,0xC3,0xE2,0x03);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



