//----LOCAL----
#include "mainwindow.h"

namespace Opplyse
{
	namespace Window
	{
		MainWindow::MainWindow()
		{
			this->set_default_size(this->default_width, this->default_height);
			this->set_size_request(this->min_width, this->min_height);

			this->main_header_bar.setGenericParent(this);
			this->set_titlebar(this->main_header_bar);
			this->main_header_bar.set_visible(true);
		}

		MainWindow::~MainWindow()
		{

		}
	}
}
