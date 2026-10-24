#pragma once

#include "MainWindow.g.h"

namespace winrt::StarLaunch::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();



        void NavView_SelectionChanged(
            winrt::Microsoft::UI::Xaml::Controls::NavigationView const& sender,
            winrt::Microsoft::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs const& args);


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
