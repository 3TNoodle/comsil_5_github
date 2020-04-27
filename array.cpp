#include "Array.h"
#include <cstdlib>
#include<iostream>
using namespace std;

template <typename T>
Array<T>::Array(int size)
{
	if(size < 0)
	{
		cout << "Error: Please enter 0 or more" << endl;
	}
	else
	{
		data = new T[size];
		len = size;	
	}
}

template <typename T>
Array<T>::~Array()
{
	delete [] data;	
}

template <typename T>
int Array<T>::length() const
{
	return len;
}

template <typename T>
T& Array<T>::operator[](int i)
{
	static T tmp;

	if(i >= 0 && i < len)
	{
		return data[i];
	}
	else
	{
		cout << "Array bound error!" << endl;
		return tmp;
	}
}

template <typename T>
T Array<T>::operator[](int i) const
{
	if(i >= 0 && i<len)
	{
		return data[i];
	}
	else
	{
		cout << "Array bound error!" << endl;
		return 0;
	}
}

template <typename T>
void Array<T>::print()
{
	int i;
	cout<<"[";
	for(i = 0; i < len; i++)
		cout << ' ' << data[i];
	cout << " ]";
	cout<<endl;
}
