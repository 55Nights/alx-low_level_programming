#include "main.h"
/**
 * _memset - returns the pointer to the memory area s
 * @s: is the buffer
 * @b: is the character to fill the buffer with
 * @n: its the length of the buffer
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
