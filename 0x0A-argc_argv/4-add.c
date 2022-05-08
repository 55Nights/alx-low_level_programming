#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the main function
 * @argc: is the number of arguments passed
 * @argv: is the array of string passed
 * Return: 0 if sucessful
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
