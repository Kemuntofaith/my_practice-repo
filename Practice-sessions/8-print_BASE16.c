#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (a = 'A'; a <= 'F'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
