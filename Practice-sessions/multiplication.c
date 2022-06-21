#include <stdio.h>
int result(int a, int b)
{
	int result;
        result = a * b;
        printf("The result of %d * %d is: %d\n", a, b, result);
        return result;
}

int main()
{
	int a;
	int b;

	result(3, 5);
	return 0;
}
