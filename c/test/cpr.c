#include <stdio.h>

int f(int a, int b, int c)
{
	return a > b ? 
		   a > c ? a : c : 
		   b > c ? b : c ;
}

int main()
{

	int a = f(4,5,2);

	printf("%d\n",a);
	return 0;
}
