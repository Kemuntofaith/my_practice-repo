#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a;
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		putchar('0' + numb);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
