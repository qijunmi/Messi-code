#include <stdio.h>
#include <malloc.h>

int main(){

	char str[]="hello";
	char *p = malloc(1000);

	printf("%d %d\n",sizeof(str),sizeof(p));
	return 0;
}
