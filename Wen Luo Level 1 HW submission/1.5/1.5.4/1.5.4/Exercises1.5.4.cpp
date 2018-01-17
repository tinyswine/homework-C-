#include <stdio.h>

void printnumber(int n)
{
	int i, j, l, k, m = 1, count = 0;
	i = n;
	if ((i < 10) && (i >= 0))
	{
		putchar(n / m + 48);
		putchar('\n');
		return;
	}
	if ((i > -10) && (i < 0))
	{
		putchar('-');
		putchar(-(n / m) + 48);
		putchar('\n');
		return;
	}
	while (i != 0)
	{
		i = i / 10;
		count += 1;
	}
	for (j = 1; j < count; j++)
	{
		m *= 10;
	}
	if (n < 0)
	{
		putchar('-');
		putchar(-(n / m) + 48);
	}
	else
		putchar(n / m + 48);
	l = n % m;
	if (l < 0)
		l = -l;
	for (k = 0;; k++)
	{
		m = m / 10;
		if (l / m == 0)
			putchar('0');
		else
			break;
	}
	printnumber(l);
}

int main()
{
	int n = -203005;
	printnumber(n);
}