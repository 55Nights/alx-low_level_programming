#include "main.h"
#include <ctype.h>
/**
 * _islower - is the entry point
 * @c: is the character to be checked
 * Return: 0 or 1
 */
int _islower(int c)
{
	int d;

	d = islower(c);
	if (d > 0)
	{
		return (1);

	} else
	{
		return (0);
	}
}
