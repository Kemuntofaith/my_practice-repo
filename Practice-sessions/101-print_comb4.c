#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ones;
	int tens;
	int hundreds;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar('0' + hundreds);
				putchar('0' + tens);
				putchar('0' + ones);
				if (hundreds < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
