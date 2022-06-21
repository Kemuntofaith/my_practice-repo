#include <stdio.h>

void identity(char name[], int age)
{
	printf("Hello %s\n", name);
	printf("You can apply for a visa when you turn %d\n", age);
}

int main()
{
	int age = 27;
	char name[] = "Faith";

	identity(name, age);
	return 0;
}
