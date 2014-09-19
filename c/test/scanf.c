#include <stdio.h>

int main()
{
	char s[10] = {0};
	while(scanf("%s",s) != EOF)
		printf("%s\n",s);

	return 0;
}
