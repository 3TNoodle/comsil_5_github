#include<iostream>
#include<algorithm>
#include "GrowableArray.h"
using namespace std;

template <class T>
GrowableArray<T>::GrowableArray(int size) {
	if(size < 0)
		cout << "Error: Please enter 0 or more " << endl;
	else {
		this->data = new T[size];
		this->len = size;
	}
}		

template <class T>
T& GrowableArray<T>::operator[](int i) {
	static T tmp;
	
	if(i >= 0 && i < this->len)
		return this->data[i];
	else if(i >= 0 && i < 2 * (this->len)) {
		T *temp; 
		temp = new T[(this->len) * 2];
		copy(this->data, this->data + this->len, temp);
		for(int j = this->len; j < (this->len)*2; j++)
			temp[j] = 0;
		delete this->data;
	 	this->data = temp;
		this->len *= 2;
		return this->data[i];
	}
	else {
		cout << "Array bound error!" << endl; 
		return tmp;
	}
}
