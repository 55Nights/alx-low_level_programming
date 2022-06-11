This branch will touch on variadic functions.
What are variadic functions ?
This are functions that take indefinate number of arguments and are declared with an elipsis in place of the last parameter.
e.g
int check(int a, int b, ...);
To allow a function to accept indefinite number of arguments we will have to use the stdarg.h 
library

DECLARING variadic function
int check(int a, ...);

They must have at least one named parameter.

The following instance is wrong and not allowed

char *wrong(...);

example
#include <stdarg.h>
#include <stdio.h>

int
add_em_up (int count,...)
{
  va_list ap;
  int i, sum;

  va_start (ap, count);         /* Initialize the argument list. */

  sum = 0;
  for (i = 0; i < count; i++)
    sum += va_arg (ap, int);    /* Get the next argument value. */

  va_end (ap);                  /* Clean up. */
  return sum;
}

int
main (void)
{
  /* This call prints 16. */
  printf ("%d\n", add_em_up (3, 5, 5, 6));

  /* This call prints 55. */
  printf ("%d\n", add_em_up (10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));

  return 0;
}
