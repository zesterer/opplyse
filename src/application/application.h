#ifndef OPPLYSE_APPLICATION_APPLICATION_H
#define OPPLYSE_APPLICATION_APPLICATION_H

//----STANDARD----
#include "vector"

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
				std::vector<Window::MainWindow*> main_windows;

				Application();
				virtual ~Application();

				Window::MainWindow& addMainWindow();
				Window::MainWindow& getPrimaryMainWindow();
		};
	}
}

#endif
