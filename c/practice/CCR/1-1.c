#include <stdio.h>
#include <string.h>

#define STR_LIMIT 1024
#define CHARSET_SIZE 256
#define UNFLAGGED 0

static int bitsmap = 0;

int getflag(int source,int pos){
	return ((int)1 << CHARSET_SIZE - pos) & source;
}

void setflag(int * source,int pos){
	*source += ((int)1 << CHARSET_SIZE - pos);
}

int main(void)
{
	char source[STR_LIMIT];
	gets(source);
	int source_size = strlen(source);
	if(!source_size)
		puts("The string is empty!");

	if(source_size> CHARSET_SIZE){
		puts("not unique!\n");
		return -1;
	}

	int i = 0;
	for(int chartmp; i < source_size; ++i)
	{
		chartmp = (int)source[i];
		//printf("chartmp:%d\n",chartmp);
		if(getflag(bitsmap,chartmp) == UNFLAGGED){
			setflag(&bitsmap,chartmp);
			//printf("zero! %d\n",i);
		}else{
			puts("not unique");
			return -1;
		}
	}

	puts("unique");

	return 0;
}
