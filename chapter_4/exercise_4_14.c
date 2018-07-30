/*
	Exercise 4-14
	Define a macro swap(t,x,y) that interchanges two arguments of type t. (Block structure will help.)
*/

#include <stdio.h>

#define swap(t, x, y) {t temp = x; x = y; y = temp;}

int main() 
{
    int x = 22, y = 9;
 
    swap(int, x, y);
    printf("swapped : x = %d, y = %d", x, y);
}
