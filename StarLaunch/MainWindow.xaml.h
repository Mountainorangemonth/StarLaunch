#pragma once

#include "MainWindow.g.h"

namespace winrt::StarLaunch::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::StarLaunch::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
