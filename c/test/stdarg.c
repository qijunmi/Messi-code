#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct node * node;
#define SENTINEL -1

struct node{
	int data;
	node next;
};

node initlist(int x, ... )
{
	node head, *p = &head;

	va_list ap;
	int data = x;
	va_start(ap,x);
	while(data != SENTINEL)
	{
		(*p) = malloc(sizeof(*p));
		(*p)->data = data;
		p = &(*p)->next;
		data = va_arg(ap,int);
	}

	*p = NULL;

	va_end(ap);

	return head;
}

int main()
{
	node list = initlist(1,5,3,7,SENTINEL);

	if(!list)
		printf("null!\n");

	while(list)
	{
		printf("%d\n",list->data);
		list = list->next;
	}

	return 0;
}
