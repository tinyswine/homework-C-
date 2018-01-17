#include<stdio.h>

int main()
{
	float base, height, area;
	printf("Please input base and height\n");
	scanf_s("%f %f", &base, &height);
	area = base * height / 2;
	printf("The area of the triangle is %f\n", area);
	return 0;
}