#ifndef OPPLYSE_SUBWIDGETS_MAINHEADERBAR_H
#define OPPLYSE_SUBWIDGETS_MAINHEADERBAR_H

//----LIBRARY----
#include "gtkmm-3.0/gtkmm/headerbar.h"

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
				Application::Application* application;

				MainHeaderBar();
				virtual ~MainHeaderBar();
		};
	}
}

#endif
