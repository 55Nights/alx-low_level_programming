#include "main.h"
/**
 * _pow_recursion - calculates pow(x,y)
 * @x: number to be raised
 * @y: power of a number
 * Return: return int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		if (y == 0)
		{
			return (x);
		}
		return (x * _pow_recursion(x, y - 1));
	}
}
