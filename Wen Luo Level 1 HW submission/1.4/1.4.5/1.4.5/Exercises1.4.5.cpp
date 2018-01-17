#include<stdio.h>

int main()
{
	int begin = 0, end = 19, step = 1, c;
	double f;
	printf("Celsius    Fahrenheit\n");
	for (c = begin; c <= end; c += step)
	{
		f = c * 9.0 / 5.0 + 32;
		printf("%d %10.1f\n", c, f);
	}
}