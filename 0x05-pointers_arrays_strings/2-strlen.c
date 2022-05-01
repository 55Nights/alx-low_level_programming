#include "main.h"
/**
 * _strlen - functions
 * @s : str length
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;

	return (c);
}
