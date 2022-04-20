#include "_putchar.c"
#include "5-rev_string.c"
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);

	return (0);
}
