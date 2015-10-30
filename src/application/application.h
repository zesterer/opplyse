#ifndef OPPLYSE_APPLICATION_APPLICATION_H
#define OPPLYSE_APPLICATION_APPLICATION_H

//----STANDARD----
#include "vector"

//----LIBRARY----
#include "gtkmm-3.0/gtkmm.h"

//----LOCAL----
#include "common/generic.h"
#include "window/mainwindow.h"

namespace Opplyse
{
	namespace Application
	{
		class Application : public Common::Generic
		{
			public:
				Glib::RefPtr<Gtk::Application> application;

				std::vector<Window::MainWindow*> main_windows;

				Application(int argc, char* argv[]);
				virtual ~Application();

				int run();
				Window::MainWindow& addMainWindow();
				Window::MainWindow& getPrimaryMainWindow();
		};
	}
}

#endif
