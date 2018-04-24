/* 
	Exercise 1-4 
	Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include <stdio.h>

int main()
{
	float fahrenheit, celsius;
	int lower, upper, step;
	
	lower = 0;		/* lower limit of temperature table */
	upper = 300; 	/* upper limit */
	step = 20;
	
	printf("Celsius   Fahrenheit\n");
	printf("--------------------\n");
	
	celsius = lower;
	while (celsius <= upper) 
	{
		fahrenheit = (celsius * (9.0/5.0)) + 32.0;
		printf("%6.0f %12.1f\n", celsius, fahrenheit);
		celsius = celsius + step;
	}

    return 0;
}
