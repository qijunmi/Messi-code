#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	const int b = 11;

	//int * p = &b; //error,const object can`t just be reference by a pointer point to a const object
	const int * pc;
	pc= &a;
	int * const cpa = &a;
	const int * const cpb = &b;
	int * const cpca = &a;
	const int * const cpcb = &b;
	//(*pc)++;
	++a;
	(*cpa)++;
	(*cpca)++;
	//(*cpb)++; //error
	//(*cpcb)++;//error,cpcb after dereference is a const object

	cout << a << endl;

	return 0;
}
