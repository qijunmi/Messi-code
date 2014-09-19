#ifndef _SINGLYLIST_H
#define _SINGLYLIST_H

#include <assert.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct slist * slist_node;
typedef struct slist * slist_head;
typedef struct slist * slist;
typedef int item_t;

#define SENTINEL ((int)0)

struct slist{
	item_t data;
	slist rest;
};

extern slist 		slist_new(item_t x, ... );
extern slist_node	slnode_new(item_t data);
extern void 		slist_free(slist list);
extern slist		slist_append(slist list,slist_node node);
extern slist		slist_push(slist list,slist_node node);
extern slist		slist_pop(slist list,slist_node * target);
extern slist		slist_reverse(slist list); 
extern void			slist_traverse(slist list, void apply());
extern void			slist_shownode(slist_node n);
extern void			slist_showlist(slist list);
extern void			add_3(slist_node n);

#endif
