#pragma once
#include "Windows.Xbox.Controls.NuiControl.NuiConfig.g.h"

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


namespace winrt::Windows::Xbox::Controls::NuiControl::implementation
{
    struct NuiConfig
    {
        NuiConfig() = default;

        static hstring KinectVersion();
        static bool IsKinectConnectedToCorrectPort();
        static winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Xbox::Controls::NuiControl::INuiAudioTestResult, uint32_t> RunNuiAudioTestAsync(winrt::Windows::Xbox::Controls::NuiControl::NuiAudioTest testToRun);
        static int32_t NA_E_CALIBRATE_DEADMIC();
        static int32_t NA_E_CALIBRATE_NOISELEVEL_TOOLOUD();
        static int32_t NA_E_CALIBRATE_SPKLEVEL_TOOLOUD();
        static int32_t NA_E_CALIBRATE_SPKLEVEL_TOOSOFT();
        static int32_t NA_S_CALIBRATE_OK();
    };
}
namespace winrt::Windows::Xbox::Controls::NuiControl::factory_implementation
{
    struct NuiConfig : NuiConfigT<NuiConfig, implementation::NuiConfig>
    {
    };
}