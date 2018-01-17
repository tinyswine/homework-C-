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
	printf("There are %d 0s, %d 1s, %d 2s, %d 3s and %d 4s\n", count0, count1, count2, count3, count4);
}