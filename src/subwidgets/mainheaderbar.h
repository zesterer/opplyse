#ifndef OPPLYSE_SUBWIDGETS_MAINHEADERBAR_H
#define OPPLYSE_SUBWIDGETS_MAINHEADERBAR_H

//----STANDARD----
#include "string"

//----LIBRARY----
#include "gtkmm-3.0/gtkmm/headerbar.h"
#include "gtkmm-3.0/gtkmm/button.h"

//----LOCAL----
#include "common/generic.h"

namespace Opplyse
{
	namespace Application
	{
		class Application;
	}

	namespace SubWidgets
	{
		class MainHeaderBar : public Common::Generic, public Gtk::HeaderBar
		{
			public:
				std::string title = "Opplyse";
				std::string subtitle = "Version 0.0.0";

				Gtk::Image* new_window_image;
				Gtk::Button new_window_button;

				MainHeaderBar();
				virtual ~MainHeaderBar();
				void onNewWindowButtonClicked();
		};
	}
}

#endif
