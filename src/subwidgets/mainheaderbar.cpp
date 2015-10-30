//----LOCAL----
#include "mainheaderbar.h"

namespace Opplyse
{
	namespace SubWidgets
	{
		MainHeaderBar::MainHeaderBar()
		{
			this->set_show_close_button(true);
			this->set_title(this->title);
			this->set_subtitle(this->subtitle);
		}

		MainHeaderBar::~MainHeaderBar()
		{

		}
	}
}
