#include <stdio.h>
#include <string.h>

#define FNAME_SIZE 256
#define LCHAR_SIZE 256
#define BUFFER_SIZE 4096
#define DEST_SIZE 4096

void remove_space(char * src)
{
	int gap = 0;
	while(*src != '\0')
	{
		if(*src == ' ' || *src == 10 || *src == '\t'){
			gap++;
		}
		src++;
		if(gap){
			*(src-gap) = *src;
		}
	}
}

int main(int argc, char *argv[])
{
	FILE * source = fopen(argv[1],"r");
	char dest[FNAME_SIZE] = "min_";
	char buffer[BUFFER_SIZE];
	char dest_buffer[DEST_SIZE];

	if(source){
		FILE * write_to = fopen(strcat(dest,argv[1]),"w+");

		while(fgets(buffer, LCHAR_SIZE, source))
		{
			remove_space(buffer);
			strcat(dest_buffer,buffer);
		}

		fputs(dest_buffer,write_to);
		fclose(write_to);
	}

	fclose(source);
	return 0;
}

