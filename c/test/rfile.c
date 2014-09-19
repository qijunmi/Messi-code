#include <stdio.h>	
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int i;

	FILE * f = fopen("test.txt","r");
	FILE * dest = fopen("dest.txt","a");
	while((fscanf(f,"%d",&i) != EOF))
	{
		fprintf(dest,"%d",i);
	}
	fclose(f);
	return 0;
}
