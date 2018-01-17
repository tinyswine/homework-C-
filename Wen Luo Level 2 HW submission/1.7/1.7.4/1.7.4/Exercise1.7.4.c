#include <stdio.h>

void DayName(int i);

int main()
{
	int n = 5;
	DayName(n);
}

void DayName(int i)
{
	char* dayname[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	printf("Day %d is a %s\n", i, *(dayname + i - 1));
	return;
}