/*
 * 6. Modify Program 7.8 so that the squareRoot() function accepts a double
 * precision argument and returns the result as a double precision value. Be
 * certain to change the value of the variable epsilon to reflect the fact that
 * double precision variables are now being used.
 * By Faisal Saadatmand
 */

#include <stdio.h>

/* Function to calculate the absolute value of a number */
float absoluteValue(float x)
{
	if (x < 0)
		x = -x;
	return (x);
}

/* Function to compute the square root of a number */
double squareRoot(float x, const double epsilon)
{
	double guess         = 1.0;

	do {
		guess = (x / guess + guess) / 2.0;
	} while (absoluteValue((guess * guess) / x) >= epsilon); 
	return guess;
}

int main (void) 
{
	printf("squareRoot(2.0) = %.2f\n", squareRoot(2.0, 1.00001));
	printf("squareRoot(144.0) = %.2f\n", squareRoot(144.0, 1.00001));
	printf("squareRoot(17.5) = %.2f\n", squareRoot(17.5, 1.00001));

	return 0;
}
