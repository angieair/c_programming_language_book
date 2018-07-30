/*
	Exercise 5-4
	Write the function strend(s, t), which returns 1 if the string t occurs at the end 
    of the string s, and zero otherwise
*/

#include <stdio.h>
#include <string.h>

char strend (char *s, char *t);

int main() 
{
    char *s = "Testing";
    char *t = "ing";
 
    printf("'%s' ends with '%s' : %s\n", s, t, (strend(s,t) ? "True" : "False"));

    return 0;
}


char strend (char *s, char *t) 
{
    int s_length = strlen(s);
    int t_length = strlen(t);

    if (s_length == 0 || t_length == 0 || (t_length > s_length))
        return 0;

    s += s_length - t_length;

    return (strcmp(s, t) == 0);
}