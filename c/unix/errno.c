#include <stdio.h>
#include <string.h>

int errno;

int main(int argc, char *argv[])
{
 	errno = 7;
	puts(strerror(7));
	perror("test");
	return 0;
}
