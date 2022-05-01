#include "main.h"
#include <stdio.h>
/**
 * _puts - prints str
 * @str : the string
 * Return : void
 */
void _puts(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
}
