#include <stdio.h>

void a(void f(int))
{
	f(5);
}

void b(int x)
{
	printf("x:%d\n",x);
}

int main()
{
	void *f;
	f = &b;
	a(&b);
	return 0;
}
