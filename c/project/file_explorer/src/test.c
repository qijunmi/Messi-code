#include "directory.h"

int main()
{
	
	char * path = "/home/aloha/code";

	puts(path);

	walkdir(path,1,1);

	return 0;
}
