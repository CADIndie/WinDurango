#pragma once
#include "Windows.Xbox.Management.Deployment.ContentInstallationInfo.g.h"

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
//static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentInstallationInfo : ContentInstallationInfoT<ContentInstallationInfo>
    {
        ContentInstallationInfo() = default;

        ContentInstallationInfo(hstring const& path, hstring const& oneStoreProductId, winrt::guid const& contentId, hstring const& packageFamilyName, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Xbox::Management::Deployment::ConsoleGeneration const& generation, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata);
        ContentInstallationInfo(hstring const& path, hstring const& oneStoreProductId, winrt::guid const& contentId, hstring const& packageFamilyName, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata);
        hstring Path();
        winrt::guid ContentId();
        winrt::Windows::Xbox::Management::Deployment::IContentMetadata Metadata();
        hstring OneStoreProductId();
        hstring PackageFamilyName();
        bool InstallByDefault();
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentInstallationInfo : ContentInstallationInfoT<ContentInstallationInfo, implementation::ContentInstallationInfo>
    {
    };
}
