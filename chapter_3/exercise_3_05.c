/*
	Exercise 3-5
	Write the function itob(n, s ,b) that converts the integer n into a base b character representation
	in the string s. In particular, itob(n, s, 16) formats n as a hexadecimal integer in s.
*/

#include <stdio.h>
#include <stdbool.h>
#include "utils.h"

#define MIN_BASE 2
#define MAX_BASE 16

void IntToBase(int num, char s[], int base);

int main(void)
{
    char s[MAXLINE] = "";
    int num, base;
    
    printf("number: ");
    scanf("%d", &num);
    printf("base (2-16): ");
    scanf("%d", &base);
    
    IntToBase(num, s, base);
    printf("=> %s\n", s);
    
	return 0;
}

void IntToBase(int num, char s[], int base)
{
    int i = 0;
    bool isNumNegative = false;
    
    if (base < MIN_BASE || base > MAX_BASE)
        return;
    
    if (num < 0) {
        num = -num;
        isNumNegative = true;
    }
        
    do {
        s[i++] = (num % base) + '0';
    } while ((num /= base) > 0);
    
    if (isNumNegative)
        s[i++] = '-';
    
    s[i] = '\0';
    
    ReverseString(s);
}
