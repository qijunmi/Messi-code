int main()
{
	const int i = 8;
	const int b = 5;
	int * const cp = &b;
	int * p = &i;
	(*p)++;
	(*cp)++;
	printf("%d\n",*p);
	printf("%d\n",i);
	printf("%d\n",*cp);
	printf("%d\n",b);

	return 0;
}
