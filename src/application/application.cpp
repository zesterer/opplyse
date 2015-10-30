//----LOCAL----
#include "application.h"

namespace Opplyse
{
	namespace Application
	{
		Application::Application()
		{
			this->addMainWindow();
		}

		Application::~Application()
		{

		}

		Window::MainWindow& Application::addMainWindow()
		{
			Window::MainWindow* window = new Window::MainWindow();

			this->main_windows.push_back(window);

			return *window;
		}

		Window::MainWindow& Application::getPrimaryMainWindow()
		{
			return *this->main_windows[0];
		}
	}
}
