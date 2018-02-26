#ifndef Array_
#define Array_
#include "Point.hpp"

template <typename T>
class Array
{
private:
	int m_size;
	T* m_data;
public:
	Array();
	Array(int size);
	Array(const Array<T>& a);
	~Array();
	Array<T>& operator=(const Array<T>& a);
	int Size() const;
	void SetElement(int index, const T& p);
	const T& GetElement(int index) const;
	T& operator[](int index);
	const T& operator[](int index) const;
};
	
#endif