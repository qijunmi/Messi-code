#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct node * heap;
typedef struct node * node;

struct node{
	int data;
	node left;
	node right;
};

node insert_node(heap h,int x)
{
	node * n = &h;

	while(*n)
	{
		printf("loop !\n");
		n = x < (*n)->data ? &(*n)->left : &(*n)->right;
	}

	printf("loop over!\n");
	(*n) = malloc(sizeof(*n));
	(*n)->data = x;
	
	(*n)->left = NULL;
	(*n)->right = NULL;

	return h;
}

node buildheap(int x, ... )
{
	va_list ap;
	va_start(ap,x);
	
	heap top = NULL;

	while(x)
	{
		top = insert_node(top,x);
		x = va_arg(ap,int);
	}

	va_end(ap);

	return top;
}

void midst_traverse(heap top)
{
	if(top->left)
		midst_traverse(top->left);

	printf("data:%d\n",top->data);

	if(top->right)
		midst_traverse(top->right);

}

int main()
{
	heap h = buildheap(3,2,5,1,0);
	midst_traverse(h);
	return 0;
}
