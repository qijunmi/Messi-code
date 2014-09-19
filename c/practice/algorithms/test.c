#include "singlylist.h"
#include <limits.h>

slist_node insertion_sort(slist list)
{
	slist_node head = NULL,*h = &head,*prev=&head;

	while(list)
	{
		prev = &head;
		h = &(*prev)->rest;

		//printf("list:%d\n",list->data);
		while((*prev) && (*prev)->data < list->data)
		{
			if((*h) && (*h)->data > list->data)
				break;
			prev = &(*prev)->rest;
			h = &(*h)->rest;
		}

		if(*prev == NULL){
			(*prev) = malloc(sizeof(*prev));
			(*prev)->data = list->data;
		}else{
			slist_node n  = malloc(sizeof(&n));
			n->data = list->data;
			n->rest = (*prev)->rest;
			(*prev)->rest = n;
		}


		list = list->rest;
	}

	return head;

}

slist_node selection_sort(slist list)
{
	slist_node head  = NULL,*h = &head, next = list,origin_list = list;
	int sentinel = INT_MAX, max = 0;

	while(next){
		max = 0;
		(*h) = malloc(sizeof(*h));
		(*h)->data = list->data;
	
		//printf("a\n");
		while(list)
		{
			//printf("step:%d\n",list->data);
			if(list->data > max && list->data < sentinel){
				max = list->data;
			}
			list = list->rest;
		}
		//printf("loop over!\n");

		//printf("get max:%d\n",max);
		sentinel = max;
		if(max != (*h)->data){
			max ^= (*h)->data;
			(*h)->data ^= max;
			max ^= (*h)->data;
		}
		
		//printf("c\n");
		h = &(*h)->rest;
		next = next->rest;
		list = origin_list;
	}

	return head;
}

int main()
{
	slist list = slist_new(1,4,3,6,9,2,7,SENTINEL);

	slist sorted_list = selection_sort(list);

	while(sorted_list)
	{
		printf("%d\n",sorted_list->data);
		sorted_list = sorted_list->rest;
	}

	return 0;
}
