/* 
	Exercise 2-7
	Write a function invert(x,p,n) that returns x with the n bits
	that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving
	the others unchanged.
*/

#include <stdio.h>

void print_binary(int value)
{
    while (value)
    {
        if (value & 1)
            printf("1");
        else
            printf("0");
        value >>= 1;    
    }
}

int invert(int x, int p, int n)
{
    for (int i=0; i < n; i++)
    {
        x ^= (1<<(p+i));
    }
    return x;
}

int main(void)
{
    int x = 39;
    int p = 2; // beginning position
    int n = 2; // n bits
    int result = invert(x,p,n);
    
    printf("Original : ");
    print_binary(x);
    
    printf("\nInverted : ");
    print_binary(result);

    return 0;
}
