#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

char * getline(FILE * file, long *pos)
{
	char * buffer = malloc(sizeof(char) * 80);
	char in;

	int i = 0;
	while(fscanf(file,"%c",&in) != EOF)
	{
		buffer[i++] = in;
		if(in == '\n')
		{
			buffer[i] = '\0';
			return buffer;
		}
	}

	return "\n";
}

char * getword(char * line,int * pos)
{
	char * word = malloc(sizeof(char) * 80);
	int i = 0;
	for (;*(line + *pos) != '\n';++(*pos),++i) {
		if(*(line + *pos) == ' ')
		{
			word[i] = '\0';
			++(*pos);
			//printf("%s\n",word);
			break;
		}
		word[i] = *(line + *pos);
	}

	return word;
}

void * fun(FILE * file,const char * fname)
{
	file = fopen(fname,"r");
	assert(file);

	char line[80];
	char word[80];
	int pos = 0;
	long fpos = 0;
	//fseek(file,fpos,SEEK_CUR);
	//fseek(file,fpos,SEEK_SET);
	while(strcpy(line, getline(file,&fpos)),line != NULL)
	{
		if(strcmp(line,"\n") == 0)
			break;
		while(strcpy(word,getword(line,&pos)),strcmp(word,"") != 0)
		{
			printf("word:%s\n",word);
			//memset(word,0,80);
		}
		pos = 0;
	}
	
	fclose(file);
}

int main(int argc, const char *argv[])
{
	FILE * file;
	fun(file,"test.txt");
	return 0;
}
