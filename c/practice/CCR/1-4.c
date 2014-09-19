#include <stdio.h>
#include <string.h>

#define CHARSET_SIZE 256

static int buckets[CHARSET_SIZE] = {0};
enum { FALSE = 0,TRUE };


int is_anagram(const char * source, const char * pattern)
{
	int len = strlen(source);
	if(strlen(pattern) != len){
		return FALSE;
	}

	int i = 0;
	while(i < len)
	{
		buckets[source[i++]] += 1;
	}

	while(i > 0)
	{
		buckets[pattern[--i]] -= 1;
	}

	while(i < CHARSET_SIZE)
	{
		if(buckets[i] != 0){
			return FALSE;
		}

		++i;
	}

	return TRUE;
}

int main(void)
{
	
	char * src = "abcd";
	char * ptn = "dca";
	printf("%d\n",is_anagram(src,ptn));

	return 0;
}
