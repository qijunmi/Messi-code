#include <stdio.h>
#include <string.h>
int main()
{

	char a[]={'a','b','\0'};

	printf("%d\n",strlen(a));
	
	if(a[2] == '\0')
		puts("yes");

	return 0;
}
