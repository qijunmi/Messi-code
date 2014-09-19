#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define EXT_RATIO 3

void replace(char * dest, const char * src)
{
	int i = 0, j =0;
	//const char * rep = "%20";
	while(*(src + i))
	{
		if((*(src+i)) != ' '){
			*(dest + j++) = *(src + i ++);
		}else{
			*(dest + j++) = '%';
			*(dest + j++) = '2';
			*(dest + j++) = '0';
			//strcat(dest,rep);
			//puts(dest);
			//j += 3;
			++i;
		}
	}

	*(dest + j) = '\0';
}

int main(void)
{
	char * src = "i am king!";
	char result[strlen(src) * EXT_RATIO];
	memset(result,0,strlen(src) * EXT_RATIO * sizeof(char));
	//result = malloc(strlen(src) * EXT_RATIO * sizeof(char));

	replace(result, src);

	puts(src);
	puts(result);

	return 0;
}
