//----STANDARD----
#include "stdio.h"

//----LIBRARY----
#include "gtkmm-3.0/gtkmm.h"

//----LOCAL----
#include "application/application.h"

int main(int argc, char* argv[])
{
	Glib::RefPtr<Gtk::Application> application = Gtk::Application::create(argc, argv, "org.gtkmm.example");

	Opplyse::Application::Application app;

	return application->run(app.getPrimaryMainWindow());
}
