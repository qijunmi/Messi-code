#include <stdio.h>

unsigned int getbits(unsigned x, int p, int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
}

int main(){

	printf("%u",getbits(0x555D,4,3));

	return 0;
}
