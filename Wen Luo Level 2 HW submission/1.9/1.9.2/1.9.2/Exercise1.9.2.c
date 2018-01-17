#include <stdio.h>

int main()
{
	char c;
	int err;
	FILE* fp = NULL;
	char filename[] = "Exercise1.9.1_output.txt";  //the name of the output file
	err = fopen_s(&fp,filename, "w+");   //used fopen at first, but fopen_s was recommended by the compiler
	if (err != 0)
	{
		return 1;   //avoid more operation when fail to open the file
	}
	while (1 != (c = getchar()))
	{
		fputc(c, fp);
	}
	fputs("\nCTRL + A is a correct ending.\n", fp);
	fclose(fp);  //close the file
	return 0;
}