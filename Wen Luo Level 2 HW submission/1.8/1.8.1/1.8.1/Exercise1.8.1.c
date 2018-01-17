#include <stdio.h>

struct Article
{
	int number;
	int quantity;
	char description[20];
};

void Print(struct Article* a);

int main()
{
	struct Article a =
	{
		1000,   //Initial value for number
		20,		//Initial value for quantity
		"worth reading"    //Initial value for Desciption
	};
	Print(&a);
}

void Print(struct Article* a)
{
	printf("The article number is %d\n", a->number);
	printf("The quantity is %d\n", a->quantity);
	printf("The description is %s\n", a->description);
}