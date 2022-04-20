#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
int main(void)
{
	char *str;
	int len;

	str ="Hello";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
