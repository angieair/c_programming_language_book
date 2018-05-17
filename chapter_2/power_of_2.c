/* 
	Given an integer, write a function to determine if it is a power of two
*/

#include <stdio.h>
#include <stdbool.h>

bool is_power_of_2(int value)
{
    if (value%2 == 0)
    {
        if (value/2 == 1)
            return true;
        else
            return is_power_of_2(value/2);    
    }
    return false;
}

int main()
{
    int num = 64; 
        
    if (is_power_of_2(num))
        printf("%d is a power of 2\n", num);
    else    
        printf("%d is not a power of 2\n", num);
    return 0;
}
