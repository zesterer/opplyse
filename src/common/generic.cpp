//----LOCAL----
#include "generic.h"

namespace Opplyse
{
	namespace Common
	{
		Generic::Generic(Generic* parent)
		{
			if (parent != nullptr)
				this->setGenericParent(parent);
		}

		Generic::~Generic()
		{

		}

		void Generic::setGenericParent(Generic* parent)
		{
			this->generic_parent = parent;

			if (parent == this)
				this->generic_root = this;
			else
				this->generic_root = parent->generic_root;
		}

		Generic* Generic::getGenericParent()
		{
			return this->generic_parent;
		}

		Generic* Generic::getGenericRoot()
		{
			return this->generic_root;
		}
	}
}
