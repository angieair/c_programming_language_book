/* 
	Exercise 1-20
	Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set
	of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>

#define CHARACTERS_PER_TAB 8

void print_spaces(int count)
{
	int i;
	for (i = 0; i < count; i++)
		putchar(' ');
}

main()
{
	char c;
    int characters_count = 0;
    int spaces = 0;
    
    while ((c = getchar()) != EOF)
    {
		if (c == '\t')
		{
		    spaces = CHARACTERS_PER_TAB-(characters_count%CHARACTERS_PER_TAB);
			print_spaces(spaces);
		    characters_count += spaces;
		}
		else if (c == '\n')
		{
		    characters_count = 0;
		    putchar(c);
		}
		else
		{
		    ++characters_count;
			putchar(c);
		}
    }
}
