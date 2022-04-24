#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates to n bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
