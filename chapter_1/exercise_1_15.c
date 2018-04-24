/* 
	Exercise 1-15
	Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table for 
   fahr = 0, 20, ..., 300; floating-point version */

float fahrenheit_to_celsius(float f)
{
	return (5.0/9.0) * (f-32.0);
}

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;		/* lower limit of temperature table */
	upper = 300; 	/* upper limit */
	step = 20;
	
	printf("Fahrenheit   Celsius\n");
	printf("--------------------\n");
	
	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = fahrenheit_to_celsius(fahr);
		printf("%6.0f %12.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
