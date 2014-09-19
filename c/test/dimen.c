#include <stdio.h>

int a[2][3] = {2,3,5,66,77,88};

int main()
{
	int **p = a;

	for(int i = 0,j = 0 ; i < 2 ; ++i)
	{
		for(j = 0; j < 3; ++j)
		{
			printf("%d\n",*(p++));
		}
	
	}

	return 0;
}
