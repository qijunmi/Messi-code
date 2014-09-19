#include <stdio.h>

#define UINT_SIZE (sizeof(unsigned int))

unsigned int getbit(unsigned int src, int pos)
{
	return src & (1U << ((pos - 1)));
}

unsigned int reverse_bits(unsigned int src, int i, int j)
{
	return (1U << (i - 1) | 1U << (j - 1)) ^ src;
}

int main(void)
{
	unsigned int  x = 0x000F;
	
	int i = 1;
	while(i <= 32)
		printf("%u", getbit(x,i++) > 0 ? 1 : 0);

	printf("\n");

	printf("%d\n",sizeof(unsigned int));
	printf("%u %u",getbit(x,4),getbit(x,5));
	x = reverse_bits(x, 4, 5);
	printf("%u\n",x);
	i = 1;
	while(i <= 32)
		printf("%u", getbit(x,i++) > 0 ? 1 : 0);


	return 0;
}
