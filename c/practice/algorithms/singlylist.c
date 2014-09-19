#include "singlylist.h"

//#define SENTINEL 0

slist slist_new(item_t x, ... )
{
	slist list,*l = &list;

	va_list ap;
	va_start(ap,x);
	while(x)
	{
		(*l) = malloc(sizeof(*l));
		(*l)->data = x;
		(*l)->rest = NULL;
		l = &(*l)->rest;
		x = va_arg(ap,item_t);
	}
	va_end(ap);

	return list;
}

slist_node slnode_new(item_t data)
{
	slist_node n = malloc(sizeof(*n));
	return n;
}

void slist_free(slist list)
{
	slist_node target = list;
	while(list)
	{
		list = list->rest;
		free(target);
		target = list;
	}
	target = NULL;
}

slist slist_append(slist list,slist_node node)
{
	slist *l = &list;
	while(list)
		l = &(*l)->rest;

	(*l) = node;

	return list;
}

slist slist_pop(slist list,slist_node * target)
{
	if(list){
		//if(!(*target))
		//	(*target) = malloc(sizeof(*target));
		assert(*target);
		(*target)->data = list->data;
		(*target)->rest = NULL;
		slist l = list->rest;
		free(list);
		return l;
	}

	return list;
}

/*void slist_traverse(slist list)
{
	while(list)
	{
		printf("item:%d\n",list->data);
		list = list->rest;
	}
}*/

slist slist_reverse(slist list)
{
	slist_node head = NULL, next = list;

	while(list)
	{
		list = list->rest;
		next->rest = head;
		head = next;
		next = list;
	}

	return head;
}

void slist_shownode(slist_node n)
{
	printf("item:%d\n",n->data);
}

void slist_traverse(slist list, void apply())
{
	while(list)
	{
		apply(list);
		list = list->rest;
	}
}

void add_3(slist_node n)
{
	n->data += 3;
}

void slist_showlist(slist list)
{
	slist_traverse(list, slist_shownode);
}
