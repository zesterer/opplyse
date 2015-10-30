#ifndef OPPLYSE_WINDOW_MAINWINDOW_H
#define OPPLYSE_WINDOW_MAINWINDOW_H

//----STANDARD----
#include "string"

//----LIBRARY----
#include "gtkmm-3.0/gtkmm/window.h"

namespace Opplyse
{
	namespace Window
	{
		class MainWindow : public Gtk::Window
		{
			public:
				MainWindow();
				virtual ~MainWindow();

				int min_width = 320;
				int min_height = 240;

				int default_width = 640;
				int default_height = 480;

				std::string title = "Opplyse";
		};
	}
}

#endif
