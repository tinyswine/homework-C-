#include <vector>
#include <list>
#include <map>
#include <iostream>

using namespace std;

int main()
{
	list<double> a;  //Default constructor of list.
	for (int i = 0; i < 10; i++)
	{
		a.push_front(i);  //Add elements to a
	}
	cout << a.front() << endl; //Get first element of a
	cout << a.back() << endl;  //Get last element of a


	vector<double> b(5, 0.5);  //Constructor of vector.
	for (int i = 0; i < 10; i++)
	{
		b.push_back(i);  //Add elements to b
	}
	cout << b[4] << endl; //Get 4th element of b
	cout << b[5] << endl;  //Get 5th element of b


	map<string, double> c; //Default constructor of map.
	typedef pair<string, double> element;
	c.insert(element("paul", 1));
	map<string, double>::iterator index = c.begin();
	c.insert(index, element("julia", 2));
	c["curry"] = 3;
	cout << c["paul"] << endl;
	cout << c["julia"] << endl;
	cout << c.at("curry") << endl;

	return 0;
}