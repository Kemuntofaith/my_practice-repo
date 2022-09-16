#include <stdio.h>
#include <ctype.h>

int main()
{
	int number = 7;
	char alpha = 'j';

	if (number != 5 && alpha != 'b')
	{
		putchar('f');
	}
	else if (number != 7 || alpha != 'b')
	{
		putchar('t');
	}
	else
	{
		putchar('m');
	}
	putchar('\n');
	return (0);
}
