#include <stdio.h>

void showbits(int source,int offset, int len)
{
	printf("%d\n",source);
	int i = 1;
	while(i <= len)
	{
		printf("%d",(source & (1U << (offset+i-1))) || 0);
		if(!(i % 8) && i)
			printf("\n");
		++i;
	}
}

int bit_reverse(int src, int offset, int len)
{
	int result =src, mask = 0;
	int i = 1;
	while(i <= len)	
	{
		mask += (1U << (offset + i - 1));
		++i;
	}
	mask = ~mask;

	result &= mask;

	int left, right;
	int l_bit,r_bit;

	left = offset + len;
	right = offset + 1;

	//showbits(result,0,32);
	for(; left >= right; --left,++right)//showbits(result,0,32))
	{
		l_bit = (src & (1U << (left - 1))) || 0;
		if(left == right)
		{
			result += (l_bit << (left - 1));
			break;
		}

		r_bit = (src & (1U << (right - 1))) || 0;
		//printf("%d %d\n",l_bit,r_bit);

		if(l_bit ^ r_bit)
		{
			result += (l_bit > r_bit) ? (1U << (right - 1)) : (1U << (left - 1));
			continue;
		}
		result += ((l_bit << (left - 1)) + (r_bit << (right - 1)));
	}

	return result;
}

/*Recursive version of bit_reverse*/
int bit_rreverse(int src, int offset, int len)
{
	int result = src;
	int left = offset + len, right = offset + 1;
	int l_bit,r_bit;
	//printf("%d %d\n",left,right);
	if(left >= right)
		result = bit_rreverse(src, offset + 1, len - 2);
	else
		return result;


	//showbits(mask,0,32);

	l_bit = (src & (1U << (left - 1))) || 0;
	r_bit = (src & (1U << (right - 1))) || 0;

	if(l_bit ^ r_bit)
	{
		result ^= ((1U << (right -  1)) | (1U << (left - 1)));
	}

	return result;

}

int main()
{
	int src = 0;
	src = bit_reverse(14,0,4);
	showbits(src,0,32);
	src = bit_rreverse(14,0,4);
	showbits(src,0,32);

	//src = src <> 1;
	return 0;
}
