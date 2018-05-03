#include <winrt/Windows.ApplicationModel.Activation.h>
#include <winrt/Windows.UI.h>
#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Media.h>

using namespace winrt;
using namespace winrt::Windows::ApplicationModel::Activation;
using namespace winrt::Windows::UI;
using namespace winrt::Windows::UI::Xaml;
using namespace winrt::Windows::UI::Xaml::Controls;
using namespace winrt::Windows::UI::Xaml::Media;

namespace
{
	struct App : ApplicationT<App>
	{
		void OnLaunched(LaunchActivatedEventArgs const &)
		{
			TextBlock block;

			block.FontFamily(FontFamily(L"Segoe UI Semibold"));
			block.FontSize(72.0);
			block.Foreground(SolidColorBrush(Colors::Orange()));
			block.VerticalAlignment(VerticalAlignment::Center);
			block.TextAlignment(TextAlignment::Center);
			block.Text(L"Hello World!");

			Window window = Window::Current();
			window.Content(block);
			window.Activate();
		}
	};
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR pCmdLine, int nCmdShow)
{
	init_apartment();
	Application::Start([](auto &&) { make<App>(); });
}
