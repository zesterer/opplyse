namespace Opplyse
{
	class Window : GenericWidget
	{
		private Gtk.ApplicationWindow internal_object;
		
		private HeaderBar header_bar;
		
		public Window(Application parent)
		{
			base(parent);
			
			Gtk.Application application = parent.getInternal();
			this.internal_object = new Gtk.ApplicationWindow(application);
			
			this.internal_object.set_default_size(640, 480);
			this.internal_object.title = "Opplyse";
			
			this.header_bar = new HeaderBar(this);
			this.internal_object.set_titlebar(this.header_bar.getInternal());
			
			this.internal_object.show_all();
		}
	}
}
