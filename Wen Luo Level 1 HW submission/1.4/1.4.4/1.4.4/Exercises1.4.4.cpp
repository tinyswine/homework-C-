#include<stdio.h>

int main()
{
	int begin = 0, end = 300, step = 20, f;
    double c;
	f = begin;
	printf("Fahrenheit    Celsius\n");
	while (f <= end)
	{
		c = (5.0 / 9.0)*(f - 32);
		printf("%d  %10.1f\n", f, c);
		f += step;
	}
}