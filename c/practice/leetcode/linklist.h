#ifndef _LINKLIST_H
#define _LINKLIST_H

#include "node.h"

typedef struct node * head;
typedef struct node * list;

extern head llist_new(NDT data);
extern void llist_free(list l);
extern int llist_len(list l);
extern void llist_append(list l,node n);
extern void llist_show(list l);
extern void llist_traverse(list l);
extern void llist_push(list * l,node n);
extern node llist_pop(list * l);

#endif
