#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

typedef struct node * node;
typedef struct node * list;

struct node{
	int data;
	node next;
};

node create_list(char *num)
{
	int i = strlen(num);
	node head, *h = &head;
	while(i)
	{
		(*h) = malloc(sizeof(*h));
		(*h)->data = num[i-1] - '0';
		h = &(*h)->next;
		--i;
	}
	(*h) = NULL;

	return head;
}

node add_list(list l1,list l2)
{
	int num1 = 0,num2 = 0;
	int mul=1;
	while(l1)
	{
		num1 += l1->data * mul;
		l1 = l1->next;
		mul *= 10;
	}
	mul = 1;
	while(l2)
	{
		num2 += l2->data * mul;
		l2 = l2->next;
		mul *= 10;
	}
	printf("num1:%d num2:%d\n",num1,num2);
	char *sum = malloc(sizeof(char) * SIZE);
	sprintf(sum,"%d",num1+num2);
	printf("sum:%s\n",sum);
	return create_list(sum);
}

node add_list2(list l1,list l2)
{
	int inc = 0, sum = 0;
	list suml,*s = &suml;
	while(l1 || l2 || inc)
	{

		sum = 0;
		if(l1){
			sum += l1->data;
			l1 = l1->next;
		}
		if(l2){
			sum += l2->data;
			l2 = l2->next;
		}

		sum += inc;
		inc = (sum >= 10);
		sum = inc ? sum - 10 : sum;

		(*s) = malloc(sizeof(*s));
		(*s)->data = sum;
		s = &(*s)->next;
	}

	(*s) = NULL;

	return suml;
}

int main(int argc,char *argv[])
{
	list l1,l2;
	l1 = create_list(argv[1]);
	l2 = create_list(argv[2]);

	/*while(l1)
	{
		printf("%d",l1->data);
		l1 = l1->next;
	}*/
	list sum = add_list2(l1,l2);
	while(sum)
	{
		printf("%d\n",sum->data);
		sum = sum->next;
	}

	return 0;
}
