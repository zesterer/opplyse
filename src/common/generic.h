#ifndef OPPLYSE_COMMON_GENERIC_H
#define OPPLYSE_COMMON_GENERIC_H

namespace Opplyse
{
	namespace Common
	{
		class Generic
		{
			public:
				Generic* generic_parent;
				Generic* generic_root;

				Generic(Generic* parent = nullptr);
				void setGenericParent(Generic* parent);
				Generic& getGenericParent();
				Generic& getGenericRoot();
		};
	}
}

#endif
