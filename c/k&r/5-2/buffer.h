#include <stdio.h>

#define BUFFSIZE 1024

int buffer[BUFFSIZE];
int bufp=0;

int getch(){
	return (bufp > 0) ? buffer[--bufp]: getchar();
}

int ungetch(int c){
	if(bufp > BUFFSIZE){
		printf("Buffer leak!!\n");
		return -1;
	}
	else{
		buffer[bufp++] = c;
	}
	return 0;
}
