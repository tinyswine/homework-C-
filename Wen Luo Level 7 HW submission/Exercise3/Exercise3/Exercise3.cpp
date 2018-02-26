#ifndef Compare_c
#define Compare_c
#include "Compare.cpp"   //remember cpp instead of hpp!!!
#endif

// checking global function
template <typename T>
bool compare(T t)
{
	return t < 6;
}

int main()
{
	vector<double> a1, a2;
	for (int i = 0; i < 10; i++)
	{
		a1.push_back(i);     //add element to vector
		a2.push_back(10 - i);
	}
	cout << count_if(a1.begin(), a1.end(), compare<double>) << endl; //use the checking global function

	//Compare<double> c(6);
	Compare<double>* c = new Compare<double>(6);   //create a pointer pointing to a compare object
	cout << count_if(a1.begin(), a1.end(), *c) << endl;  //use the compare object
	delete c;  //free the memory
}