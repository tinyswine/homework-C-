#ifndef Array_
#define Array_
#include "Point.hpp"

#ifndef ArrayException_h
#define ArrayException_h
#include "ArrayException.hpp"
#endif

template <typename T>
class Array
{
protected:
	static int m_size_default;  //Default Size
	int m_size;
	T* m_data;
public:
	Array();         //Default Constructor
	Array(int size);    //Constructor
	Array(const Array<T>& a);  //Copy Constructor
	virtual ~Array();    //Deconstructor
	Array<T>& operator=(const Array<T>& a);
	int Size() const;    //Get size
	void SetElement(int index, const T& p);  
	const T& GetElement(int index) const;
	T& operator[](int index);
	const T& operator[](int index) const;  //For const variable
	static int DefaultSize();    //Get Defaultsize
	static void DefaultSize(int size);  //Change Defaultsize
};
	
#endif