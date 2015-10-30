//----LOCAL----
#include "application.h"

#include "stdio.h"

namespace Opplyse
{
	namespace Application
	{
		Application::Application(int argc, char* argv[])
		{
			this->application = Gtk::Application::create(argc, argv, "org.gtkmm.example");
			//Gtk::Settings::get_default()->property_gtk_application_prefer_dark_theme() = true;

			Window::MainWindow* first_window = new Window::MainWindow();
			first_window->setGenericParent(this);
			this->main_windows.push_back(first_window);
		}

		Application::~Application()
		{

		}

		int Application::run()
		{
			return this->application->run(this->getPrimaryMainWindow());
		}

		Window::MainWindow& Application::addMainWindow()
		{
			Window::MainWindow* window = new Window::MainWindow();
			window->set_visible(true);
			this->application->add_window(*window);
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
