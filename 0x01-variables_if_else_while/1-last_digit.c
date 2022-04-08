#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - is the Entry point
 * the last digit of n is evaluated
 * if it is greater than 5 print is greater than 5
 * if it is less than 6 print is less than 6
 * if is 0 print it is zero
 * Return: is 0 if successfull
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and it is greater than 5\n", n, l);
	} else if (l == 0)
	{
		printf("Last digit 0f %d is %d and is 0\n", n, l);
	} else if (l < 6)
	{
		printf("Last digit of %d is %d and is less than 6\n", n, l);
	}

	return (0);
}
