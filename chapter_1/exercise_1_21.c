/* 
	Exercise 1-21
	Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same
	tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?
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
	int spaces_count = 0;
	int characters_count = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            spaces_count = 0;
            characters_count = 0;
            putchar(c);
        }
        else 
        {
            ++characters_count;
    		if (c == ' ')
    		{
    			++spaces_count;
    			if (characters_count%CHARACTERS_PER_TAB == 0)
    			{
    				putchar('\t');
    				spaces_count = 0;
    			}		
    		}
    		else
    		{
    			if (spaces_count > 0) 
    			{
    				print_spaces(spaces_count);
    			}
    			spaces_count = 0;	
    			putchar(c);
    		}
        }
    }
}


