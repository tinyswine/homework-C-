#include<stdio.h>

int main()
{
	signed n = -5;
	printf("%d\n", n >> 2); //The sign is preserved, so arithemtic shift is performed.
}