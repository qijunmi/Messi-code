#ifndef _NODE_H
#define _NODE_H

typedef int NDT;
typedef struct node * node;

struct node{
	NDT data;
	struct node * next;
};

extern node node_new(NDT data);
extern void node_free(node n);

#endif
