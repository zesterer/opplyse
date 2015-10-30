//----LOCAL----
#include "application.h"

#include "stdio.h"

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
			window->setGenericParent(this);

			this->main_windows.push_back(window);

			return *window;
		}

		Window::MainWindow& Application::getPrimaryMainWindow()
		{
			return *this->main_windows[0];
		}
	}
}
