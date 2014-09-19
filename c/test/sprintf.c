#include <stdio.h>

int main(int argc, const char *argv[])
{
	fprintf(stdin,"test");
	fflush(NULL);
	printf("ok\n");
	return 0;
}
