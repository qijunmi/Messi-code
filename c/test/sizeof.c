#include <stdio.h>

int main()
{

	int a[10];
	double b = 0.0f;
	void * test = &b;

	printf("%d\n",sizeof(char *));
	printf("%d\n",sizeof(void *));
	printf("%d\n",sizeof(int *));
	printf("%d\n",sizeof(short *));
	printf("%d\n",sizeof(long *));
	printf("%d\n",sizeof(float *));
	printf("%d\n",sizeof(double *));
	printf("%d\n",sizeof(b));
	printf("%lf\n",b);
	printf("%lf\n",*((double *)(test)));

	return 0;
}
