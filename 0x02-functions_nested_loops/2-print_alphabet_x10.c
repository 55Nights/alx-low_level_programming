#include "main.h"
/**
 * print_alphabet_x10 - will  print th alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (char a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
