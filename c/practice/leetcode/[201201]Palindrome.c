#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int is_palindrome(int num)
{
	if(num < 0)
		return 0;
	
	int div = 1;
	while(num / div > 10)
		div *= 10;

	int first,last;
	while(num)
	{
		first = num / div;
		last = num % 10;
		if(last != first)
			return 0;
		num = (num % div ) / 10;
		div /= 100;
	}

	return 1;
}

int main(int argc, char *argv[])
{

	int a = atoi(argv[1]);
	assert(a);
	printf("assert%d\n",is_palindrome(a));

	return 0;
}
