#include <stdio.h>

int main()
{

	int i = 4;
	enum test {fri = i,sat};

	test a = sat;
	test b = 4;
	printf("%d %d\n",a,b);

	return 0;
}
