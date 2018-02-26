#ifndef Array_h
#define Array_h
#include "Array.hpp"
#endif

#ifndef NumericArray_
#define NumericArray_

template <typename T>
class NumericArray : public Array<T>
{
public:
	NumericArray();    //Default Constructor
	NumericArray(int size);    //Constructor
	NumericArray(const NumericArray<T>& t);  //Copy Constructor
	virtual ~NumericArray();    //Destructor
	NumericArray<T> operator+(const NumericArray<T>& t) const;  //add the elements of two numeric array
	NumericArray<T> operator*(double factor) const;  //scale the elements of the numeric array 
	NumericArray<T> DotProduct(const NumericArray<T>& t) const;  //calculate the dot product
	NumericArray<T>& operator=(const NumericArray<T>& t);  //assignment
};

#endif