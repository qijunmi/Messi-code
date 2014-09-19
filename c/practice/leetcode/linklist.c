#include "linklist.h"
#include <stdio.h>
#include <assert.h>

#define OPER_TRAVERSE(x) printf("%d\n",(x)->data)

head llist_new(NDT data){
	head h = node_new(data);
	return h;
}

void llist_show(list l){
	printf("Print list(%d):\n",l);
	do{
		printf("%d\n",l->data);
		l = l->next;
	}while(l->next);
	printf("%d\n",l->data);
}

void llist_traverse(list l){
	while(l){
		OPER_TRAVERSE(l);
		l = l->next;
	}
}

void llist_append(list l,node n){
	if(l == NULL){
		printf("change!\n");
		l = llist_new(n->data);
		return;
	}
	while(l->next != NULL){
		l = l->next;
	}
	//printf("after %d(%d) add %d(%d)\n",l->data,l,n->data,n);
	l->next = n;
}

void llist_free(list l){
	node curr = l;
	while(l){
		curr = l->next;
		node_free(l);
		l = curr;
	}
}

void llist_push(list * l,node n){
	assert(n);
	n->next = *l;
	*l = n;
}

node llist_pop(list * l){
	//assert(l);
	node n = *l;
	(*l) = (*l)->next;
	n->next = NULL;
	return n;
}

node llist_find(head h, node n){
	if(h == n || h->next == n){
		return h;
	}
	node tmp = h->next;
	h = h->next->next;
	while(h){
		if(h == n)
			return tmp;
		else{
			tmp = h;
			h = h->next;
		}
	}
	return NULL;
}

/*void llist_delete(head h, node n){
	node target = NULL,prev = NULL;
	if(h == n){
		llist_pop(&h);
	}
	else if(h->next == n){
		target = h->next;
		h->next = target->next;
	}
	else{
		prev = llist_find(h,n);
		target = prev->next;
		prev->next = target->next;
	}
	node_free(target);
}*/

int llist_len(list l){
	int count = 0;
	while(l){
		++count;
		l = l->next;	
	}
	return count;
}
