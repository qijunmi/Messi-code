#include <stdio.h>

int main(){

	int a[2][3]={{2,4,1},{6,5,7}};

	int *p = a;

	int i = 0;

	while(i < 6){
		printf("%d\n",*(p+i));
		++i;
	}

	i = 0;
	while(i < 6){
		printf("%d\n",*(p++));
		++i;
	}


	return 0;
}
