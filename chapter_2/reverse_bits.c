/*
	Reverse bits of a given 32 bits unsigned integer

	Example:
		Input: 43261596 Output: 964176192
		Explanation: 43261596 represented in binary as 00000010100101000001111010011100,
					 return 964176192 represented in binary as 00111001011110000010100101000000.
*/

#include <stdio.h>

#define set_bit(var,bit) (var |= (1<<bit))
#define get_bit(var,bit) (var & (1<<bit))

void print_binary(unsigned int value)
{
    int num_of_bits = sizeof(value)*8;

    for (int i = num_of_bits-1; i >= 0; i--) {
        if (get_bit(value,i))
            printf("1");
        else
            printf("0");
    }
}

unsigned int reverse_bits(unsigned int value)
{
    unsigned int result = 0;
    int num_of_bits = sizeof(value)*8;

    for (int i = 0; i < num_of_bits; i++)
    {
        if (get_bit(value,i))
        {
            result |= (1 << (num_of_bits-1 - i));
        }
    }
    return result;
}

int main(void)
{
    unsigned int input = 43261596;
    print_binary(input);

    unsigned int result = reverse_bits(input);
    printf("\nResult : %d\n", result);
    print_binary(result);

    return 0;
}