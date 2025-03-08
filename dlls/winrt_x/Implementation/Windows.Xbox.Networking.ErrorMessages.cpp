#include "pch.h"
#include "Windows.Xbox.Networking.ErrorMessages.h"
#include "Windows.Xbox.Networking.ErrorMessages.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    hstring ErrorMessages::GetMessageForError(uint32_t errorCode)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		// TODO: Add error messages for each error code.
		switch (errorCode)
		{
		default:
			return L"Error message";
		}
	}
}