#include <stdio.h>

/*int is the same,if can`t get 01 in legal position,check src,if src > 0,the number can`t be represented,if src < 0,just put all 1 to end*/

unsigned int getlargerone(unsigned int src)
{
	unsigned int invert_mask = 0x0003;
	unsigned int mask_set = 0x0000;
	int pos = 0, len = 0;

	while(!(1u << pos & src))
		++pos;
	len = pos;
	while((1u << pos) & src)
		++pos;

	//printf("pos:%d\n",pos);
	len = pos - len - 1;
	//printf("len:%d\n",len);

	src ^= (invert_mask << (pos - 1));
	if(len == 0)
		return src;
	
	while(len)
	{
		mask_set = (mask_set << 1) + 0x0001;
	//	printf("mask:%u\n",mask_set);
		--len;
	}

	src |= mask_set;

	return src;
}

int main()
{
	unsigned int src = 0x0005;	
	printf("result:%u\n",getlargerone(src));
	return 0;
}
