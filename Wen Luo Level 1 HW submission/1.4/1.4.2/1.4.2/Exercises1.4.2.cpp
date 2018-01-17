#include<stdio.h>

int main()
{
	int count_character = -1, count_word = 0, count_newline = 1;
	char c = ' ', c_fore = ' ';
	bool is_c_character, is_c_fore_character = false;
	do
	{
		count_character++;
		switch (c)
		{
			case ' ':case '\n':case '\t': is_c_character = false; break;
			default: is_c_character = true;
		}
		switch (c_fore)
		{
		case ' ':case '\n':case '\t': is_c_fore_character = false; break;
		default: is_c_fore_character = true; break;
		}
		if ((!is_c_fore_character) && is_c_character)
		{
			count_word++;
		}
		if (c == '\n')
		{
			count_newline++;
		}
		c_fore = c;
	} while (4!=(c=getchar()));
	if (count_character == 0)
	{
		count_newline = 0;
	}
	printf("There are %d characters, %d words and %d newlines\n", count_character, count_word, count_newline);
}