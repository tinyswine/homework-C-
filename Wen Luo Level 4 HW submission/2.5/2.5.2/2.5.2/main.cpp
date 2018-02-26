#include "Point.hpp"
#include <sstream>

int main()
{
	Point** p = new Point*[3];
	for (int i = 0; i < 3; i++)
	{
		p[i] = new Point(i,i);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << p[i]->ToString() << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		delete p[i];
	}
	delete p;
}