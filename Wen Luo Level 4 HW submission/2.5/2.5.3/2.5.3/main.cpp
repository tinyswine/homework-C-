#include "Point.hpp"
#include "Array.hpp"

int main()
{
	Point* p = new Point(1, 1);
	cout << endl;

	Array* a = new Array();
	cout << a->Size() << endl;
	cout << endl;

	for (int i=0; i < a->Size(); i++)
	{
		a->SetElement(i, *p);
	}
	cout << endl;

	Array* b = new Array(*a);
	cout << endl;

	Array* c = new Array(20);
	cout << c->Size() << endl;
	cout << endl;

	*c = *b;
	cout << endl;

	cout << c->GetElement(2) << endl;
	cout << (*c)[3] << endl;
	//c->GetElement(2) = *p;  //error!!!
	//(*c)[2] = *p;   Correct!!!
	cout << endl;

	const Array* d = new Array;
	cout << (*d)[2] << endl;  //Wrong if no const version of operator[] exists 

	delete p;
	cout << endl;
	delete a;
	cout << endl;
	delete b;
	cout << endl;
	delete c;
	cout << endl;
	delete d;
	cout << endl;
	return 0;
}