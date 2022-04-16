#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _abs - entry point
 * @d : number to check
 * Return: 0 if sucessful
 */
int _abs(int d)
{
	int v;

	v = abs(d);
	printf("%d", v);
	putchar('\n');

	return (0);
}
