#include <stdio.h>
#include <string.h>

int isforbid(char c,char s2[]){
	int i = 0,len = strlen(s2);

	while(i < len){
		if(c == s2[i]){
			return 0;
		}
		++i;
	}
	return -1;
}

int squeeze(char s1[],char s2[]){
	int i = 0,j = 0,len = strlen(s1);
	char c;
	while(i < len){
		printf("%d < %d\n",i,len);
		puts(s1);
		c = s1[i];
		printf("s[i]:%c\n",c);
		if(isforbid(c,s2) == -1){
			if(i != j){
				printf("s[i]:%c\n",c);
				printf("swift:%d %c\n",j,c);
				s1[j] = c;
			}
			++j;
		}
		++i;
	}
	s1[j] = '\0';
	//strcpy(s1,s);
	puts(s1);
}

int main(){

	char s1[] = "test";
	char s2[] = "ec";

	squeeze("test","ec");

	return 0;
}
