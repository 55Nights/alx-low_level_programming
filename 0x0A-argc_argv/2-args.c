#include <stdio.h>
/**
 * main - the main function
 * @argc: is the number of arguments passed
 * @argv: is the string of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
