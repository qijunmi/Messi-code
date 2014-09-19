#include <stdio.h>
#include <malloc.h>

char * getm(){
	char p[] = "hello world";
	return p;
}

void test(){
	char * str = NULL;
	str = getm();
	printf("%s\n",str);
}

int main(){

	test();

	return 0;
}
