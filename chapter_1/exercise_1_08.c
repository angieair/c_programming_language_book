/* 
	Exercise 1-8 
	Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main()
{
	int input = 0;
	int blanks = 0;
	int tabs = 0;
	int newlines = 0;
	
	while ((input = getchar()) != EOF)
	{
		
		if (input == ' ')
		{
			++blanks;
		}
		else if (input == '\t')
		{
			++tabs;
		}
		else if (input == '\n')
		{
			++newlines;
		}
	}
	printf("Blanks = %d\tTabs = %d\tNewlines = %d\n", blanks, tabs, newlines);
	
    return 0;
}
