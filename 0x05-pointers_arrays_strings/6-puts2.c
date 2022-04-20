#include "main.h"
#include <string.h>
/**
 * puts2 - prints strings
 * @str: is the string
 * Return: 0
 */
void puts2(char *str)
{
	int i, l, len, j;

	len = strlen(str);
	i = 0;

	while (i < len)
	{
		if (str[i] == '.')
		{
			l = (len + 1) - 1;
		}
		else
		{
			l = len - 1;
		}
		i++;
	}
	for (int j = 0; j < l; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
