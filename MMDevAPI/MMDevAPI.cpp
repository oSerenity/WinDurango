// MMDevAPI.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "MMDevAPI.h"


// This is an example of an exported variable
MMDEVAPI_API int nMMDevAPI=0;

// This is an example of an exported function.
MMDEVAPI_API int fnMMDevAPI(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CMMDevAPI::CMMDevAPI()
{
    return;
}
