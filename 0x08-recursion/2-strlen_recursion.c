#include "main.h"
/**
 * _strlen_recursion - count strings
 * @s: a string to count
 * Return: count
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
