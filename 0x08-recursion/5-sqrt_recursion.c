#include "main.h"

/**
 * _sqrt_recursion - return natural number
 *
 * @n: an integer
 *
 * Return: natural number or -1
 */
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * sq - finds square root
 *
 * @n: number
 * @s: natural num
 *
 * Return: int
 */
int sq(int n, int s)
{
	if (s * s == n)
	{
		return (s);
	}
	else if (s * s < n)
	{
		return (sq(n, s + 1));
	}
	else
		return (-1);
}
