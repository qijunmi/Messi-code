#include <stdio.h>
#include <malloc.h>

void * mstrcpy(char * dest,char * src)
{
	while(*dest++ = *src++)
		;
}

void * mstrcat(char *dest,char *src)
{
	while(*dest)
		dest++;
    mstrcpy(dest,src); 
}

int main()
{
	char src[] = "cd",dest[8] = "ab  ";
	char *test = (char *)malloc(sizeof(char));
	mstrcat(dest,src);
	printf("strcat:%s\n",dest);

	return 0;
}
