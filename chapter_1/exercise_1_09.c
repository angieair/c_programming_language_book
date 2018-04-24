/* 
	Exercise 1-9
	Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
*/

#include <stdio.h>

int main()
{
	int input = 0;
	int blanks = 0;

	while ((input = getchar()) != EOF)
	{
		
		if (input == ' ')
		{
			while (getchar() == ' ') 
			    ;
			putchar(' ');
		}
		else
		{
		    putchar(input);
		}
	}
	
    return 0;
}
