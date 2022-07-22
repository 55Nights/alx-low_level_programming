#include <stdio.h>
/**
 * print_it - prints something
 * Return: void
 */
void print_it(void) __attribute__ ((constructor));
void print_it(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
