#include "main.h"
#include <ctype.h>
/**
 * _isalpha - the entry point
 * @c: character  to be evaluated
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int d;

	d = isalpha(c);
	if (d > 0)
	{
		return (1);

	} else
	{
		return (0);
	}
}
