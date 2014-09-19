#include <stdio.h>
#include <stdlib.h>

typedef struct node * node;

struct node{
	int data;
	struct node * next;
};

node init_list(int a[],int len)
{
	node head,*p = &head;

	int i = 0;
	while(i < len)
	{
		*p = malloc(sizeof(*head));
		(*p)->data = a[i++];
		p = &(*p)->next;
		printf("init %d\n",a[i - 1]);
	}

	(*p) = NULL;

	return head;
}

node init_list_wrong(int a[],int len)
{
	node head,prev;
	head = malloc(sizeof(struct node));
	prev = malloc(sizeof(struct node));
	int i = 0;
	while(i < len)
	{
		node n = malloc(sizeof(struct node));
		n->data = a[i++];
		if(i == 0){
			head = prev = n;
			continue;
		}
		prev->next = n;
		n->next = NULL;
		prev = n;
	}

	return head;
}

void free_list(node head)
{
	node prev = NULL;
	while(head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}

int n = 0;

void get_nth_to_last(node head)
{
	if(head->next)
		get_nth_to_last(head->next);
	else
		printf("null!\n");
	++n;
	if(n == 2)
		printf("%d\n",head->data);
}

int main()
{
	int len = 10;
	int a[11] = {7,4,6,7,1,4,8,2,5,9};

	node head = init_list(a,len);
	node * t = &head;
	while((*t))
	{
		printf("lll\n");
		printf("datainit:%d\n",(*t)->data);
		t = &(*t)->next;
	}
	n = 0;
	get_nth_to_last(head);
	free_list(head);
	return 0;
}
