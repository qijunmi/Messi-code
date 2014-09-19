#include <stdio.h>
#include <string.h>

#define INPUT_LIMIT 1024
#define CHARSET_SIZE 256
#define UNFLAGGED 0

static int bitmap = 0;
static int offset = 0;

int getflag(int bitmap, int pos)
{
	return ((int)1 << CHARSET_SIZE - pos) & bitmap;
}

void setflag(int * bitmap, int pos)
{
	*bitmap += ((int)1 << CHARSET_SIZE - pos);
}

void compact(char * source,int len)
{
	int i = 1;
	int offset = 0;
	while(source[len - i] == '\0')
		++i;
	len -= i;
	
}

int main(void)
{
	char source[INPUT_LIMIT];
	gets(source);
	
	int len = strlen(source);
	int i = 0,p = 0;
	for(; i < len; ++i)
	{
		if(getflag(bitmap,(int)source[i]) == UNFLAGGED){
			setflag(&bitmap,(int)source[i]);
			if(p != i)
				source[p++] = source[i];
			else
				++p;
		}
	}

	source[p] = '\0';
	
	puts(source);

	return 0;
}
