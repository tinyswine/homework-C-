#include<stdio.h>

int main()
{
	char c;
	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, countother = 0;
	while (EOF != (c = getchar()))
	{
		switch (c)
		{
		case '0': count0++; break;
		case '1': count1++; break;
		case '2': count2++; break;
		case '3': count3++; break;
		case '4': count4++; break;
		default: countother++; break;
		}
	}
	switch (count3)
	{
		case 0:	printf("Number three appears zero time\n"); break;
		case 1:	printf("Number three appears one time\n"); break;
		case 2:	printf("Number three appears two times\n"); break;
		default: printf("The number three appears more than two times\n"); break;
	}
}