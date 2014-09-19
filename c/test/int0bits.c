#include <stdio.h>

int main()
{
	int a = -1;

	int len = sizeof(int) * 8;
	while(len)
	{
		printf("%d",(a & (1u << (len - 1))) ? 1 : 0);
		--len;
	}

	return 0;
}
