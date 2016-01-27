namespace Opplyse
{
	class GenericWidget : Object
	{
		private GenericWidget? parent = null;
		private GenericWidget? root = null;
		
		public GenericWidget(GenericWidget? parent)
		{
			this.parent = parent;
			
			if (this.parent == null)
				this.root = null;
			else
				this.root = this.parent.root;
		}
		
		public GenericWidget getParent()
		{
			if (this.parent == null)
				return this;
			else
				return this.parent;
		}
		
		public GenericWidget getRoot()
		{
			if (this.root == null)
				return this;
			else
				return this.root;
		}
	}
}
