#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = 0; ones <= 9; ones++)
		{
			putchar('0' + tens);
			putchar('0' + ones);
			if (tens != 9 || ones != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
