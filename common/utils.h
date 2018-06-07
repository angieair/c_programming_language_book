//
//  utils.h
//  c_programming_language
//
//  Created by Angela Chung on 6/6/18.
//  Copyright © 2018 Angela Chung. All rights reserved.
//

#ifndef utils_h
#define utils_h

#include <stdio.h>

#define MAXLINE 1000

#define set_bit(var,bit) (var |= (1<<bit))
#define get_bit(var,bit) (var & (1<<bit))

int GetLine(char s[], int lim);
void PrintBinary(int value);
void CopyString(char to[], char from[]);
void ReverseString(char s[]);

#endif /* utils_h */
