#include <stdio.h>

int a;

int f()
{
	return ++a;
}

int main()
{

	while(int b = f() != 3)
		printf("l\n");

	return 0;
}
