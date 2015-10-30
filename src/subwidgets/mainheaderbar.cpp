//----LIBRARY----
#include "gtkmm-3.0/gtkmm/image.h"

//----LOCAL----
#include "mainheaderbar.h"
#include "application/application.h"

#include "stdio.h"

namespace Opplyse
{
	namespace SubWidgets
	{
		MainHeaderBar::MainHeaderBar()
		{
			this->set_show_close_button(true);
			this->set_title(this->title);
			this->set_subtitle(this->subtitle);

			this->new_window_button.set_visible(true);

			this->new_window_image = new Gtk::Image();
			this->new_window_image->set_from_icon_name("text-editor-symbolic", Gtk::BuiltinIconSize::ICON_SIZE_MENU);
			this->new_window_image->set_visible(true);

			this->new_window_button.set_image(*this->new_window_image);
			this->new_window_button.signal_clicked().connect(sigc::mem_fun(this, &MainHeaderBar::onNewWindowButtonClicked));
			this->add(this->new_window_button);
		}

		MainHeaderBar::~MainHeaderBar()
		{

		}

		void MainHeaderBar::onNewWindowButtonClicked()
		{
			(dynamic_cast<Application::Application*>(this->getGenericRoot()))->addMainWindow();
		}
	}
}
