#include "pch.h"
#include "MainWindow.xaml.h"
#include "HomePage.xaml.h"
#include "DownloadsPage.xaml.h"
#include "SettingsPage.xaml.h"
#include "MorePage.xaml.h"


#include <winrt/Microsoft.UI.Xaml.Media.h>
#include <winrt/Windows.UI.Xaml.Interop.h>

#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace winrt::Microsoft::UI::Xaml::Media; 

namespace winrt::StarLaunch::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        ExtendsContentIntoTitleBar(true);
        SystemBackdrop(DesktopAcrylicBackdrop());
        NavView().SelectedItem(NavView().MenuItems().GetAt(0));

        InitializeComponent();
        // ↓ Add this. ↓
        // Hide the default system title bar.
        ExtendsContentIntoTitleBar(true);
        // Replace system title bar with the WinUI TitleBar.
        SetTitleBar(AppTitleBar());
    }

    void MainWindow::NavView_SelectionChanged(
        NavigationView const& sender,
        NavigationViewSelectionChangedEventArgs const& args)
    {
        if (auto item = args.SelectedItem().try_as<NavigationViewItem>())
        {
            auto tag = unbox_value<hstring>(item.Tag());

            if (tag == L"Home")
                ContentFrame().Navigate(xaml_typename<StarLaunch::HomePage>()); 
            else if (tag == L"Download")
                ContentFrame().Navigate(xaml_typename<StarLaunch::DownloadsPage>()); 
            else if (tag == L"Settings")
                ContentFrame().Navigate(xaml_typename<StarLaunch::SettingsPage>()); 
            else if (tag == L"More")
                ContentFrame().Navigate(xaml_typename<StarLaunch::MorePage>()); 
        }
    }
    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}