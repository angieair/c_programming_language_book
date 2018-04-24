/* 
	Exercise 1-14
	Write a program to print a histogram of the frequencies of different characters in its input
*/

#include <stdio.h>

main()
{
    #define NUM_LETTERS 26
    int i, j, input;
    int uppercase_letter[NUM_LETTERS];
    int lowercase_letter[NUM_LETTERS];
    char c;
    
    for (i = 0; i < NUM_LETTERS; i++)
    {
        uppercase_letter[i] = 0;
        lowercase_letter[i] = 0;
    }
    
    while ((input = getchar()) != EOF)
    {
        if (input >= 'a' && input <= 'z')
        {
            ++lowercase_letter[input-'a'];
        }
        else if (input >= 'A' && input <= 'Z')
        {
            ++uppercase_letter[input-'A'];
        }
    }
    printf("\n\n");
    
    for (i = 0; i < NUM_LETTERS; i++)
    {
        c = 'A' + i;
        printf("%c | ", c);
        for (j = 0; j < uppercase_letter[i]; j++)
        {
            printf("*");
        }
        printf("\n");
//        printf("uppercase_letter[%d] = %d\n", i, uppercase_letter[i]);
    }
    for (i = 0; i < NUM_LETTERS; i++)
    {
        c = 'a' + i;
        printf("%c | ", c);
        for (j = 0; j < lowercase_letter[i]; j++)
        {
            printf("*");
        }
        printf("\n");
        // printf("lowercase_letter[%d] = %d\n", i, lowercase_letter[i]);
    }
}
