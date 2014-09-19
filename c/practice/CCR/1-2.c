#include <string.h>
#include <stdio.h>

#define INPUT_LIMIT 1024

void swap(char * s1, char  * s2)
{
	*s1 = *s1 ^ *s2;
	*s2 = *s1 ^ *s2;
	*s1 = *s1 ^ *s2;
}

void reverse(char * s)
{
	int len = strlen(s), i = 0;
	while(i < len - i - 1)
	{
		swap(s+i,s+len-i-1);
		++i;
	}
}

int main(void)
{

	char source[INPUT_LIMIT];
	gets(source);

	reverse(source);

	puts(source);

	return 0;
}
