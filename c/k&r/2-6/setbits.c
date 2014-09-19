#include <stdio.h>

unsigned int setbits(unsigned x, int p, int n, unsigned y){

	return (x & ~(~(~0 << n) << (p - n + 1)) | (y & ~(~0 << n)) << (p - n + 1));

}

int main()
{
	printf("result:%u\n",setbits(0xFFFF,4,4,0xFFFC));

	return 0;
}
