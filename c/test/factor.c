#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc == 0)
		return 0;
	main(argc-1,argv);
	printf("%d\n",argc);
	return 0;
}
