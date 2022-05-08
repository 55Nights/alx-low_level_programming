#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: is the number of arguments passed
 * @argv: is an array of strings passed
 * Return: 0 if sucessfull
 */
int main(int argc, char *argv[])
{
	int i, m = 1;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			m *= atoi(argv[i]);
		}
		printf("%d\n", m);
	}
		return (0);
}
