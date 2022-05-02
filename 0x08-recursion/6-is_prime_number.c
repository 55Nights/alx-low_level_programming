#include "main.h"
/**
 * is_prime_number - is a function
 * @n: integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	if (n == 1)
	{
		return (0);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else if (n % 3 == 0)
	{
		return (0);
	}
	else if (n % 5 == 0)
	{
		return (0);
	}
	else if (n % 7 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
