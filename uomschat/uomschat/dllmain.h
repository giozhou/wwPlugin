// dllmain.h : Declaration of module class.

class CuomschatModule : public ATL::CAtlDllModuleT< CuomschatModule >
{
public :
	DECLARE_LIBID(LIBID_uomschatLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_UOMSCHAT, "{B3F992F6-159B-453E-B29C-3CE74ED3C174}")
};

extern class CuomschatModule _AtlModule;
