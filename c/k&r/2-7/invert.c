#include <stdio.h>

unsigned int invert(unsigned x, int p, int n)
{

	return (~x & (~(~0 << n)) << (p - n + 1)) + (x & ~((~(~0 << n)) << (p - n + 1)));
}


int main()
{

	printf("resultd:%u\n",invert(0xFFFF,15,1));
	return 0;
}
