#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */

int main(void)
{
	char c[200], *k = c;
	int n = 0, r = 0;

	srand(time(NULL));

	while (n < 2645)
	{
		r = rand() % 122;

		if (r > 32)
		{
			*k = r;
			k = k + 1;
			n += r;
		}
	}

	*k = (2772 - n);
	*(k + 1) = '\n';
	printf("%s", c);
	return (0);
}
