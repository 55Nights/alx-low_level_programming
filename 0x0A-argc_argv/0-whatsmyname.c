#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: is the argument count
 * @argv: is the argument vector and array of strings
 * Return: 0
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
