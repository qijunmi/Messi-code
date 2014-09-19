#include <stdio.h>
#include <malloc.h>
#include <string.h>

void test(){

	char *str=(char *)malloc(100);
	strcpy(str,"hello");
	free(str);
	if(str != NULL){
		strcpy(str,"world");
		printf("%s\n",str);
	}
}

int main(){

	test();
	return 0;
}
