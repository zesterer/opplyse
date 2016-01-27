namespace Opplyse
{
	enum OutputMode
	{
		DEBUG = 0,
		INFOS = 1,
	}	
	
	void output(string message, OutputMode mode = OutputMode.DEBUG)
	{
		string prefix = "";
		
		switch (mode)
		{
			case OutputMode.DEBUG:
				prefix = "DEBUG";
				break;
			case OutputMode.INFOS:
				prefix = "INFOS";
				break;
			default:
				prefix = "!MSG!";
				break;
		}
		
		stdout.printf("[" + prefix + "] " + message + "\n");
	}
}
