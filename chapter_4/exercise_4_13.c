/*
	Exercise 4-13
	Write a recursive version of the function reverse(s), which reverses the string s in place.
*/

#include <stdio.h>
#include <string.h>

int reverse(char s[], int left_index, int length)
{
  int temp;
  int right_index;
  
  if ((2*left_index) > length)
    return 0;

  right_index = length-left_index;
  temp = s[left_index];
  s[left_index] = s[right_index];
  s[right_index] = temp;
  reverse(s, ++left_index, length);
}

int main()
{
  char s[] = "Test";

  reverse(s, 0, strlen(s)-1);
  printf("reversed : %s", s);
}
