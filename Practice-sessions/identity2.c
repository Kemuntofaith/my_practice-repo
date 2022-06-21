#include <stdio.h>

void identity(char name[], int age)
{
	//int age = 27;
	//char name[] = "Faith";

	printf("Hello %s", name);
	printf("You can apply for a visa when you turn %d", age);
}

int main()
{
	int age = 27;
        char name[] = "Faith";

	identity(name, age);
	return 0;
}
