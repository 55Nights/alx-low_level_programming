#include <stdio.h>
#include <stdlib.h>
#include "2-str_concat.c"
/**
 *  * main - check the code for ALX School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char *s;

	        s = str_concat(NULL, "Holberton");
		    if (s == NULL)
			        {
					        printf("failed\n");
						        return (1);
							    }
		        printf("%s\n", s);
			    free(s);
			        return (0);
}