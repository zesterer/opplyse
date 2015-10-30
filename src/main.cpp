//----STANDARD----
#include "stdio.h"

//----LIBRARY----
#include "gtkmm-3.0/gtkmm.h"

//----LOCAL----
#include "application/application.h"

int main(int argc, char* argv[])
{
	Opplyse::Application::Application application(argc, argv);

	return application.run();
}
