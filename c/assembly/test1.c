#include <stdio.h>

int main()
{
	int a[4] = {1,3,6,8};

	int *p = a+1;

	printf("%d\n",*p + 1);
}
