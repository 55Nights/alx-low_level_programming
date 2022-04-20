#include "main.h"
#include <string.h>
/**
 * puts2 - prints strings
 * @str: is the string
 * Return: 0
 */
void puts2(char *str)
{
	int i, l;

	l = strlen(str) - 1;
	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
