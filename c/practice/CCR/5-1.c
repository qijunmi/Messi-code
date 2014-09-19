#include <stdio.h>

unsigned int bit_insert(unsigned int a, unsigned int b,int i,int j)
{
	unsigned int mask = 1u;
	
	while(j > i)
	{
		mask += mask << 1;
		--j;
	}

	return (a & ~(mask << i)) | (b << i);
}

void showbits(unsigned int src)
{
	int len = sizeof(unsigned int) * 8, i = 1;
	while(i <= len)
	{
		printf("%d",src & (1u << (i-1)) ? 1 : 0);
		if(i % 8 == 0)
			printf("\n");
		++i;
	}

	printf("\n");

}

int main()
{
	unsigned int a = 0x000F, b = 0x00F6, c = 0u;

	c = bit_insert(b,a,16,19);

	printf("a\n");
	showbits(a);
	printf("b:\n");
	showbits(b);
	printf("c\n");
	showbits(c);

	return 0;
}
