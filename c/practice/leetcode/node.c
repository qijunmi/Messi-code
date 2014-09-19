#ifndef _NODE_C
#define _NODE_C

#include <stdlib.h>
#include <stdio.h>
#include "node.h"

node node_new(NDT data){
	node n = malloc(sizeof(*n));
	//printf("%d\n",n);
	n->data = data;
	n->next = NULL;
	return n;
}

void node_free(node h){
	free(h);
}
#endif
