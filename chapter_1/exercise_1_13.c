/* 
	Exercise 1-13
	Write a program to print a histogram of the lengths of words in its input.
*/

#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

#define MAX_WORD_LENGTH 21

main()
{
    int c, i, j, state;
    int word_length[MAX_WORD_LENGTH];
    state = OUT;
    int length = 0;
    int num_words = 0;
    int max_height = 0;

    for (i = 0; i < MAX_WORD_LENGTH; i++)
    {
        word_length[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN) 
            {
                ++word_length[length];
                // printf("\n");
                ++num_words;
            }
            length = 0;
            state = OUT;
        }
        else if  (c == '.' || c == '?' || c == ',' || c == '-') 
        {
            // ignore
        }
        else 
        {
            ++length;
            state = IN;
            // putchar(c);
        }
    }
    // horizontal histogram
    printf("\n\nHorizontal Histogram\n");
    for (i = 1; i < MAX_WORD_LENGTH; i++)
    {
        printf("%3d| ", i);
        for (j = 0; j < word_length[i]; j++)
        {
            printf("*");
        }
        printf("\n");
        // printf("word_length[%d] = %d\n", i, word_length[i]);
    }
    // vertical histogram
    printf("\n\nVertical Histogram\n\n");
    for (i = 0; i < MAX_WORD_LENGTH; i++)
    {
        if (word_length[i] > max_height)
            max_height = word_length[i];
    }
    for (i = max_height; i >= 0; i--)
    {
        for (j = 1; j < MAX_WORD_LENGTH; j++)
        {
            if (word_length[j] > i)
            {
                printf("%5c", '*');
            }
            else 
            {
                printf("%5c", ' ');
            }
        }
        printf("\n");
    }
    for (j = 1; j < MAX_WORD_LENGTH; j++)
    {
        printf("-----");
    }
    printf("\n");
    for (j = 1; j < MAX_WORD_LENGTH; j++)
    {
        printf("%5d",j);
    }
}
