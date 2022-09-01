#include <stdio.h>

int main()
{
	char name[30];

	printf("Please enter your name:");
	name[30] = getc( stdin );
	printf("Thank you %s for your participation\n", name);
	return 0;
}
