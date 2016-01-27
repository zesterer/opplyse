namespace Opplyse
{
	class HeaderBar : GenericWidget
	{
		Gtk.HeaderBar internal_object;
		
		public HeaderBar(GenericWidget? parent)
		{
			base(parent);
			
			this.internal_object = new Gtk.HeaderBar();
			
			this.internal_object.set_show_close_button(true);
			this.internal_object.title = "Opplyse";
			this.internal_object.subtitle = "Text editor";
			
			this.internal_object.show_all();
		}
		
		public Gtk.HeaderBar getInternal()
		{
			return this.internal_object;
		}
	}
}
