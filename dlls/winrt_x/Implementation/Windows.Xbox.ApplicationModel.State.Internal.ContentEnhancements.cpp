#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentEnhancements.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentEnhancements.g.cpp"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
//////////

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    uint64_t ContentEnhancements::GetEnhancementSettings(uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::EnhancementFeatureState ContentEnhancements::GetAutoHDREnabledGlobally()
    {
        throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetAutoHDRAllowedForGame(uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetAutoHDREnabledForGame(uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    void ContentEnhancements::SetAutoHDREnabledForGame(uint32_t titleId, bool isFeatureEnabled)
    {
        throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetPerformanceModeAllowedForGame(uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetPerformanceModeEnabledForGame(uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    void ContentEnhancements::SetPerformanceModeEnabledForGame(uint32_t titleId, bool isFeatureEnabled)
    {
        throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetPerformanceModeForGameRequires120Hz(uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::PerformanceModeDetails ContentEnhancements::GetPerformanceModeDetailsForGame(uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetAutoHDRAllowedForGameFromManifest(hstring const& aumid)
    {
        throw hresult_not_implemented();
    }
    bool ContentEnhancements::GetAutoHDREnabledForGameFromManifest(uint32_t titleId)
    {
        throw hresult_not_implemented();
    }
    bool ContentEnhancements::IsGen9AwareGame(winrt::guid const& legacyProductId)
    {
        throw hresult_not_implemented();
    }
}
