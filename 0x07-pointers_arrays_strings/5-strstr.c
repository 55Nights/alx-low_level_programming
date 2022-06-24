#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: string to be searched
 * @needle: substring to search
 *
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
