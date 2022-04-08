#include <stdio.h>

/**
 * main - Entry point
 * Return: will always return a value if successful
 */
int main(void)
{
       printf("size of char : %lu byte(s)\n", sizeof(char));

       printf("size of int : %d byte(s)\n", sizeof(int));
   
       printf("size of long int : %lu byte(s)\n", sizeof(long int));

       printf("size of long long int : %lu byte(s)\n", sizeof(long long int));

       printf("size of float : %d byte(s)\n", sizeof(float));

       return (0);
}
