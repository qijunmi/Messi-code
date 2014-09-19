#include <stdio.h>
unsigned int mask = 65535;
unsigned int rightrot(unsigned x, int n)
{
	unsigned res;
	while(n){
		x = ((x << 1) + (((x & (1 << 15)) >> 15)));
		--n;
	}
	return x & mask;
}

int main()
{
	printf("result:%u\n",rightrot(0xFFF0,1));
	return 0;
}
