#ifndef __ARRAY__
#define __ARRAY__

template <typename T>
class Array {
	protected:
		T *data;
		int len;
	public:
			Array() {};
			Array(int size);
			~Array();

			int length() const;

			T& operator[](int i);
			T operator[](int i)const;

			void print();
};
#endif

