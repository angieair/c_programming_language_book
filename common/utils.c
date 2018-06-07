//
//  utils.c
//  c_programming_language
//
//  Created by Angela Chung on 6/6/18.
//  Copyright © 2018 Angela Chung. All rights reserved.
//

#include <string.h>
#include "utils.h"

/* GetLine: read a line into s, return length */
int GetLine(char s[], int lim)
{
    int c, i;
    
    for (i = 0; i < (lim-1) && (c = getchar()) != EOF; ++i)
        s[i] = c;
    
    s[i] = '\0';
    return i;
}

/* PrintBinary: print integer as binary */
void PrintBinary(int value)
{
    int num_of_bits = sizeof(value)*8;
    
    for (int i = num_of_bits-1; i >= 0; i--) {
        if (get_bit(value,i))
            printf("1");
        else
            printf("0");
    }
}

/* CopyString: copy 'from' into 'to'; assume to is big enough */
void CopyString(char to[], char from[])
{
    int i;
    
    i = 0;
    
    while ((to[i] = from[i]) != '\0')
        ++i;
}

/* ReverseString: reverse string s in place */
void ReverseString(char s[])
{
    int temp, i, j;
    
    for (i = 0, j = strlen(s)-1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
