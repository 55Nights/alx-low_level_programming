#include "4-rev_array.c"
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	reverse_array(a, sizeof(a) / sizeof(int));
	return (0);
}
