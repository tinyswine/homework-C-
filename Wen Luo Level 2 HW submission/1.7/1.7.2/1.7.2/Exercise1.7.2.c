/* Calculate the length of a string*/
#include <stdio.h>
#define MAXLINE 30
int Length(char str[]);

int main()
{
	int i = 0;    //count the number of character
	char c;   //restore each character
	char string[MAXLINE + 1];   //the string

	//Print intro text
	printf("Type up to %d chars. Exit with ^Z\n", MAXLINE);

	//Get the characters
	while (i < MAXLINE && EOF != (c = getchar()))
	{
		//Append entered character to sring
		string[i++] = c;
	}
	string[i] = '\0';    //String must be closed with \0
	printf("String length is %d\n", Length(string));
	return 0;
}

int Length(char str[])
{
	char* c = str;    //let the pointer point to &str[0]
	int count = 0;    //count the length of the string
	while (*c != '\0')   //stop when it comes to '\0'
	{
		count++;
		c++;
	}
	return count;
}