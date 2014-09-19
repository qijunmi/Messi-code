#include <stdio.h>

int main()
{
	int a = 1;
	const int b = 11;

	int * p = &b; //just warning,const object can`t just be reference by a pointer point to a const object
	const int * pc;
	int * const cpa = &a;
	int * const cpb = &b;//just warning
	int * const cpca = &a;
	int * const cpcb = &b;//just warning
	(*cpa)++;
	(*cpca)++;
	(*p)++;
	(*cpb)++;
	(*cpcb)++;
	//(*cpcb)++;//error,cpcb after dereference is a const object
	printf("a:%d\n",a);
	printf("b:%d\n",b);
//	cout << a << endl;

	return 0;
}
