#include "6-cap_string.c"
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. CApitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s",str
