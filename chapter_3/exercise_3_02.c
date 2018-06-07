/*
	Exercise 3-2
	Write a function escape (s, t) that converts characters like newline and tab into visible escape sequences 
	like \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well,
	converting escape sequences into the real characters.
*/

#include <stdio.h>
#include "utils.h"

#define MAXLINE 1000

void Escape(char s[], char t[]);
void ReverseEscape(char s[], char t[]);

int main(void)
{
    char s[MAXLINE] = "abc\ndef\t...";
    char t[MAXLINE] = "";

    ReverseEscape(s, t);
    printf("%s", t);
	return 0;
}

void Escape(char s[], char t[])
{
    int i = 0, j = 0;
    while (s[i] != '\0')
    {
        switch (s[i])
        {
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            default:
                t[j++] = s[i];
                break;
        }
        i++;
    }
}

void ReverseEscape(char s[], char t[])
{
    int i = 0, j = 0;
    while (s[i] != '\0')
    {
		switch (s[i])
		{
			case '\\':
				i++;
				if (s[i] == '\t' || s[i] == '\n')
				{
					t[j++] = s[i];
				}
				break;
			default:
				t[j++] = s[i];				
				break;
				
		}
		i++;
    }
}


