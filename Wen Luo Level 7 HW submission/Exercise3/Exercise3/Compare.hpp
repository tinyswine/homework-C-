#ifndef Compare_
#define Compare_

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
class Compare
{
private:
	T value;
public:
	Compare(T t);   //Constructor
	~Compare();  //Destructor
	bool operator()(T t);  //checking function
};
#endif

