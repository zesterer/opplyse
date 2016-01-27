namespace Opplyse
{
	class Application : GenericWidget
	{
		private Gtk.Application internal_object;
		private string[] args;
		
		private Gee.ArrayList<Window> windows;
		
		public Application(string[] args)
		{
			base(null);
			
			this.args = args;
			
			this.internal_object = new Gtk.Application("zesterer.opplyse", ApplicationFlags.FLAGS_NONE);
			this.internal_object.activate.connect(this.activate);
			
			this.windows = new Gee.ArrayList<Window>();
			
			output("Created application");
			
			//Gtk.init(ref args);
			
			output("Initialised GTK");
		}
		
		public Window addWindow()
		{
			Window new_window = new Window(this);
			
			this.windows.add(new_window);
			
			return new_window;
		}
		
		protected void activate()
		{
			for (int i = 0; i < 3; i ++)
				this.addWindow();
		}
		
		public int run()
		{
			return this.internal_object.run(this.args);
		}
		
		public Gtk.Application getInternal()
		{
			return this.internal_object;
		}
	}
}
