#include <stdio.h>
/**
 * main - prints 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 0, x = 0, y = 1, sum = 0;

	while (i < 50)
	{
		sum = x + y;
		x = y;
		y = sum;
		if (i != 49)
		{
			printf("%li, ", sum);
		}
		else
		{
			printf("%li", sum);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
