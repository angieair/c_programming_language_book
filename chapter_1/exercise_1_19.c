/* 
	Exercise 1-19
	Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.
*/

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char line[], int len);

int main()
{
    int len;                    /* current line length */
    int i;
    char line[MAXLINE];         /* current input line */
    char reverse_line[MAXLINE]; /* reverse line saved here */
    
    while ((len = getline(line, MAXLINE)) > 0)
    {
		reverse(line, len);
        printf("\n%s\n", line);
    }
    return 0;
    
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    
    for (i = 0; i < (lim-1) && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') 
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    
    i = 0;
    
    while ((to[i] = from[i]) != '\0')
        ++i;
}

void reverse(char line[], int len)
{
	int i, j;
	int temp;
	
	for (i = 0; i < (len/2); i++) 
	{
	    j = len-1-i;
	    temp = line[i];
		line[i] = line[j];
		line[j] = temp;
	}
}