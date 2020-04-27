#ifndef GA
#define GA
#include "Array.h"

template <typename T>
class GrowableArray : public Array<T> {
	public:
		GrowableArray(int size);

		T& operator[](int i);
};
#endif
