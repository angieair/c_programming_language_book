/* 
	Exercise 1-10
	Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes
	tabs and backspaces visible in an unambiguous way.
*/

#include <stdio.h>

int main()
{
	int input = 0;

	while ((input = getchar()) != EOF)
	{
		
		if (input == '\t')
		{
			printf("\\t");
		}
		else if (input == '\b')
		{ // Ctrl-H is backspace
			printf("\\b");
		}
		else if (input == '\\')
		{
			printf("\\\\");
		}
		else {
		    putchar(input);
		}
	}
	
    return 0;
}