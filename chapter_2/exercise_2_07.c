/* 
	Exercise 2-7
	Write a function invert(x,p,n) that returns x with the n bits
	that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving
	the others unchanged.
*/

#include <stdio.h>

#define set_bit(var,bit) (var |= (1<<bit))
#define get_bit(var,bit) (var & (1<<bit))

void print_binary(int value)
{
    int num_of_bits = sizeof(value)*8;

    for (int i = num_of_bits-1; i >= 0; i--) {
        if (get_bit(value,i))
            printf("1");
        else
            printf("0");
    }
}

int invert(int x, int p, int n)
{
    for (int i=0; i < n; i++)
    {
        x ^= (1<<(p-i));
    }
    return x;
}

int main(void)
{
    int x = 39;
    int p = 3; // beginning bit position
    int n = 3; // n bits
    int result = invert(x,p,n);
    
    printf("Original : ");
    print_binary(x);
    
    printf("\nInverted : ");
    print_binary(result);

    return 0;
}
