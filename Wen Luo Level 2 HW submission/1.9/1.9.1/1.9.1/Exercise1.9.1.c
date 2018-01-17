#include <stdio.h>

int main()
{
	char c;
	while (1 != (c = getchar()))
	{
		putchar(c);   //print each character each time
	}
	printf("\nCTRL + A is a correct ending.\n");
}