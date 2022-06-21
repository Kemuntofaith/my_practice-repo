#include <stdio.h>
/**
 * main - my entry point
 * Description: prints value of dbl-num in floating point and
 * scientific notation
 * Return: 0
 */
int main(void)
{
	double dbl_num = 123.456;

	printf("dbl-num can be represented as %.4f in float point notation\n", dbl_num);
	printf("dbl-num can also be represented as %.4e in scientific notation\n", dbl_num);
	return (0);
}
