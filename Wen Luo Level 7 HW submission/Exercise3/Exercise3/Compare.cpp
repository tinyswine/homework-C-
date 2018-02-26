#ifndef Compare_h
#define Compare_h
#include "Compare.hpp"
#endif

//Constructor
template <typename T>
Compare<T>::Compare(T t) : value(t)
{
	cout << "Compare Constructor Called!!!" << endl;
}

//Destructor
template <typename T>
Compare<T>::~Compare()
{
	cout << "Compare Destructor Called!!!" << endl;
}

//checking function
template <typename T>
bool Compare<T>::operator()(T t)
{
	return t < value;
}