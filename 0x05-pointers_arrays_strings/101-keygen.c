#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	srand(time(0));
	printf("%ld\n", time(0));
	return (0);
}
