#include <stdio.h>

n;
int a = 8;

c(int *a)
{
	a = (*a) + 1;
}

main()
{
	int *p = c(&a);
	printf("%d\n",*p);
}
