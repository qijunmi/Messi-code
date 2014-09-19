#include <stdio.h>

int main()
{	
	int n = 0;
	int i = 3;
	n = (++i,i+8);

	printf("%d %d\n",i,n);


	return 0;
}
