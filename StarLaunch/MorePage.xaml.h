#pragma once

#include "MorePage.g.h"

namespace winrt::StarLaunch::implementation
{
    struct MorePage : MorePageT<MorePage>
    {
        MorePage()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::StarLaunch::factory_implementation
{
    struct MorePage : MorePageT<MorePage, implementation::MorePage>
    {
    };
}
