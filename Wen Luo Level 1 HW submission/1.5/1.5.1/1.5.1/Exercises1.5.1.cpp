#include<stdio.h>

double minus(double a, double b)
{
	return a - b;
}

int main()
{
	double x = 1.0, y = 3.0;
	printf("%f\n", minus(x, y));
}