#include<stdio.h>
//swap a and b by using pointers
void Swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int i = 123, j = 456; //declaration and initialization
	printf("i = %d, j = %d\n", i, j); //initialization
	Swap(&i, &j);  //dereference
	printf("i = %d, j = %d\n", i, j);
}