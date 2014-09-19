#include <stdio.h>

void mstrcpy(char *dest, char *src)
{
	while(*dest++ = *src++)
		;
}

int main()
{
	char s1[] = "ab",s2[]="cd";
	mstrcpy(s1,s2);
	printf("%s\n",s1);
	return 0;
}
