// operaators
// print out the results of these expressions
#include <stdio.h>
int main()
{
	int x = 1;
	int y = 3;

	printf("\nGiven that x is %d and y is %d, what is:\n", x, y);
	x+= y;
	printf("After the execution of x += y, x is now: %d\n", x);
	x *= y;
	printf("after the execution of x *= y, x is now: %d\n", x);
	x /= y;
	printf("After the execution of x /= y, x is now: %d\n", x);
	x -= y;
	printf("After the execution of x -= y, x is now: %d\n", x);
	x += -y;
	printf("After the execution of x += -y, x is now: %d\n", x);
	x -= -y;
	printf("After the execution of x -= -y, x is now: %d\n", x);
	x *= -y;
	printf("After the execution of x *= -y, x is now: %d\n", x);
	return (0);
}
