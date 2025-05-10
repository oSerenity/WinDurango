// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MMDEVAPI_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MMDEVAPI_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MMDEVAPI_EXPORTS
#define MMDEVAPI_API __declspec(dllexport)
#else
#define MMDEVAPI_API __declspec(dllimport)
#endif

// This class is exported from the dll
class MMDEVAPI_API CMMDevAPI {
public:
	CMMDevAPI(void);
	// TODO: add your methods here.
};

extern MMDEVAPI_API int nMMDevAPI;

MMDEVAPI_API int fnMMDevAPI(void);
