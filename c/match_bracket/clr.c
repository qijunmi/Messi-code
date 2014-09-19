#include <stdio.h>
#include <stdlib.h>

int flag;
int process_bracket(char * input){
	if('{' == input[0] || '}' == input[0])
		flag = ('{' == input[0]) ? ++flag: --flag;
	input++;
	if(NULL == input[0]){
		return -1;
	}
	process_bracket(input);
	
	return 0;
}

int main(int argc,char * argv[]){

	1 != argc ? process_bracket(argv[1]):printf("Please input some characters!\n"),exit(-2);
	printf("%s\n",(0 == flag) ? "yes" : "no");
	
	return 0;

}
