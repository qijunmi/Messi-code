#include "linklist.h"

int main()
{
	node entry = node_new(28);
	list head = NULL;

	int i = 0;
	while(i < 5)
	{
		llist_append(head,new_node(5*i++));
	}
	llist_append(head,entry);
	while(i < 8)
	{
		llist_append(head,new_node(5*i++));
	}

	llist_show(head);

	return 0;
}
