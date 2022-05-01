#include "main.h"
/**
 * _memcpy - copies
 * @dest: pointer to copy to
 * @src: pointer to copy from
 * @n: the number of char to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
