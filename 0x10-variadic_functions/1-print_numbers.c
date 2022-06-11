#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator:  string to be printed between numbers
 * @n:  number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(ap, unsigned int));
		if (i != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}

