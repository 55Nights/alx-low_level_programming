#include "main.h"
/**
 * jack_bauer - prints every minute of the day  of Jack Bauer
 * Return: has no return type
 */
void jack_bauer(void)
{
	int h, h1, m, m1, s;

	s = 9;
	h1 = 0;
	while (h1 <= 2)
	{
		if (h1 == 2)
		{
		s = 3;
		}
	h = 0;
	while (h <= s)
	{
		m1 = 0;
		while (m1 <= 5)
		{
			m = 0;
			while (m <= 9)
			{
				_putchar('0' + h1);
				_putchar('0' + h);
				_putchar(':');
				_putchar('0' + m1);
				_putchar('0' + m);
				_putchar('\n');

				m++;
			}
			m1++;
		}
		h++;
	}
	h1++;
	}
}

