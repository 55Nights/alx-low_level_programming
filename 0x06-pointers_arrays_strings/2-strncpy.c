#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: int
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
