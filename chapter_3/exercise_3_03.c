/*
	Exercise 3-3
	Write a function expand (s1, s2) that expands shorthand notations like a-z in the string s1 into the
	equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to
	handle cases like a-b-c and a-zO-9 and -a-z. Arrange that a leading or trailing - is taken literally.
*/

#include <stdio.h>
#include "utils.h"

void Expand(char s1[], char s2[]);

int main(void)
{
    char s1[MAXLINE] = "a-z";
    char s2[MAXLINE] = "";
    
    printf("Original : %s\n", s1);
    Expand(s1, s2);
    printf("Expanded : %s\n", s2);
    
	return 0;
}

void Expand(char s1[], char s2[])
{
    char c = '\0';
    int i = 0, j = 0;
    
	while (s1[i] != '\0')
    {
        switch (s1[i])
        {
            case '-':
                if (i == 0)
                {
                    s2[j++] = '-';
                }
                else if (s1[i+1] != '\0' && s1[i+1] > s1[i-1])
                {
                    c = s1[i-1];
                    while (c <= s1[i+1])
                    {
                        s2[j++] = c++;
                    }
                    i++;
                }
                break;
        }
        i++;
    }
}
