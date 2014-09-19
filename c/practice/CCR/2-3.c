#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
	void * data;
	struct node * next;
};

typedef struct node * node;

node init_list(char a[],int len)
{
	node head = NULL,*p = & head;	

	int i = 0;
	while(i < len)
	{
		(*p) = malloc(sizeof(*head));
		(*p)->data = (&(a[i++]));
		p = &(*p)->next;
	}

	(*p) = NULL;

	return head;
}

node getelem(node list, char target)
{
	node n = NULL;

	while(list)
	{
		if((*((char *)list->data)) == target){
			n = list;
			break;
		}
		list = list->next;
	}

	return n;
}

void delete_node(node list, node target)
{
	if(target == NULL)
		return;
	if(target->next = NULL){
		target=NULL;
		//free(target);
		return;
	}
	node next = target->next;
	while(next)
	{
		target->data = next->data;
		if(next->next)
			next = next->next;
		else
			break;
		target = target->next;
	}
	//printf("target now:%c\n",*((char *)target->data));
	target->next = NULL;
	//node *t = &target;
	free(next);
	next = NULL;
	//target = NULL;
	//memset(target,0,sizeof(*list));
}

int main(void)
{

	char elem[]={'a','b','c','d','e'};

	node head = init_list(elem,strlen(elem));

	node target = getelem(head,'e');

	printf("get:%c\n",*((char *)target->data));

	delete_node(head,target);

	while(head)
	{
		printf("data:%c\n",*((char *)head->data));
		head = head->next;
	}

	return 0;
}
