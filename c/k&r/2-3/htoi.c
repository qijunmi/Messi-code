#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int result;

int strprefix(char * pre,char * mode){

	int len = strlen(pre),i = 0;

	while(i < len){
		if((*(pre+i) != *(mode+i))){
			return -1;
		}
		++i;
	}

	return 0;
}

char * handleprefix(char * input){

	if(!strprefix("0X",input) || !strprefix("0x",input)){
		input = input + 2;
	}
	else{
		printf("Prefix should be \"0X\" or \"0x\"\n");
		exit(-1);
	}
	puts(input);
	return input;
}

int charhtoi(char input){
	//char res;
	if(input >= '0' && input <= '9'){
		result = result * 16 + (input - '0') ;
	}
	else if(input >= 'a' && input <= 'f'){
		result = result * 16 + (input - 'a' + 10);
	}
	else if(input >= 'A' && input <= 'F'){
		result = result * 16 + (input - 'A' + 10);
	}
	else{
		printf("Please check your input!\nRange:[0-9][a-f][A-F]\n%c\n",input);
		exit(-2);
	}
}

int stringhtoi(char * input){
	int len = strlen(input),i = 0;
	result = 0;

	while(i < len){
		charhtoi(*(input+i));
		++i;
	}

	return result;
}

int main(){

	char * input;

	printf("Please input:");	
	gets(input);
	puts(input);

	input = handleprefix(input);

	printf("input:%s\n",input);

	printf("res:%d\n",stringhtoi(input));

	return 0;
}
