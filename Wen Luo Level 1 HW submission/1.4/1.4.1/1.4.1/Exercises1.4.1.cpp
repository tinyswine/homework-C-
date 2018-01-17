#include<stdio.h>

int main()
{
	char c, fore_c = ' ';
	bool is_c_whitespace, is_fore_c_whitespace = true;
	int num_char = 0, num_word = 0, num_newline = 1;
	while ((c = getchar()) != 4)
	{
		num_char++;
		if ((c == '\n') || (c == '\t') || (c == ' '))
		{
			is_c_whitespace = true;
		}
		else
			is_c_whitespace = false;
		if ((fore_c == '\n') || (fore_c == '\t') || (fore_c == ' '))
		{
			is_fore_c_whitespace = true;
		}
		else
			is_fore_c_whitespace = false;
		if (!is_c_whitespace && is_fore_c_whitespace)
		{
			num_word++;
		}
		if (c == '\n')
		{
			num_newline++;
		}
		fore_c = c;
	}
	if (num_char == 0)
	{
		num_newline = 0;
	}
	printf("There are %d characters, %d words and %d newlines\n", num_char, num_word, num_newline);
}