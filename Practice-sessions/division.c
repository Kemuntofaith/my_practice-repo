#include <stdio.h>

float result(int a, float z)
{
	float result;

	result = a / z;
	printf("The result of a / z is %.2f\n", result);
	return result;
}

int main()
{
	int a;
	float z;

	result(30, 24);
	return 0;
}
