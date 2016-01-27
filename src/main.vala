namespace Opplyse
{
	int main(string[] args)
	{
		output("Starting program");
		
		Application application = new Application(args);
		int result = application.run();
		
		return result;
	}
}
