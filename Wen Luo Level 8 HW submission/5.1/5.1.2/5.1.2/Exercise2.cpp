#include "boost/tuple/tuple.hpp"
#include <string>
#include <iostream>

using namespace std;

typedef boost::tuple<string, int, double> Person;


void print_person(Person& p)
{
	cout << "the information is as follows" << endl;
	cout << "name:" << p.get<0>() << endl;
	cout << "age:" << p.get<1>() << endl;
	cout << "length:" << p.get<2>() << endl;
	cout << endl;
	return;
}

int main()
{
	Person* p1 = new Person("Paul", 24, 175.0);
	print_person(*p1);
	boost::tuples::get<1>(*p1) ++;
	print_person(*p1);
	return 0;
}