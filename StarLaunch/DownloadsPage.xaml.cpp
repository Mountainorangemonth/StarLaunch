#include "pch.h"
#include "DownloadsPage.xaml.h"
#if __has_include("DownloadsPage.g.cpp")
#include "DownloadsPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::StarLaunch::implementation
{
    int32_t DownloadsPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void DownloadsPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}
