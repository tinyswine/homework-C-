#ifndef Exercise2_h
#define Exercise2_h
#include "Exercise2.hpp"
#endif

template <typename T>
double Sum(const T& a)
{
	double sum = 0;
	for (typename T::const_iterator t = a.begin(); t != a.end(); t++)
	{
		sum += *t;
	}
	return sum;
}


template <typename T>
double Sum(const T& a, const T& b)
{
	double sum = 0;
	for (T t = a; t != b; t++)
	{
		sum += *t;
	}
	return sum;
}

template <>
double Sum(const map<string, double>& a)
{
	double sum = 0;
	for (map<string, double>::const_iterator t = a.begin(); t != a.end(); t++)
	{
		sum += t->second;
	}
	return sum;
}

template <>
double Sum(const map<string, double>::const_iterator& a, const map<string, double>::const_iterator& b)
{
	double sum = 0;
	for (map<string, double>::const_iterator t = a; t != b; t++)
	{
		sum += t->second;
	}
	return sum;
}

int main()
{
	vector<double> a(10, 5);  //	Create a vector
	vector<double>::const_iterator a1 = a.begin();   //Create a iterator of vector 
	cout << Sum<vector<double>>(a) << endl;  //show the result of sum function for vector
	cout << Sum<vector<double>::const_iterator>(a1 + 1, a.end()) << endl;  //show the result of sum function for iterators of vector

	list<double> c(6, 2.5);   //	Create a list
	list<double>::const_iterator c1 = c.begin(), c2 = c.end();   //Create 2 iterators of list 
	cout << Sum<list<double>>(c) << endl;  //show the result of sum function for list
	cout << Sum<list<double>::const_iterator>(++c1, c2) << endl;  //show the result of sum function for iterators of vector

	map<string, double> b;    //	Create a iterator
	typedef pair<string, double> element;   //Create an element of map b
	map<string, double>::iterator b1 = b.end();  //Create a iterator of map
	b.insert(element("Paul", 1));   //insert an element of map b
	b["Amy"] = 2;    //add a new element
	b["Bob"] = 3.5;  //add a new element
	cout << Sum<map<string, double>>(b) << endl;    //show the result of sum function for map
	cout << Sum<map<string, double>::const_iterator>(b.begin(), --b1) << endl;    //show the result of sum function for iterators of map
}