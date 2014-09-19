#include <iostream>
using namespace std;

void swap(int &i, int &j)
{
	i ^= j;
	j ^= i;
	i ^= j;
}


int main()
{
	int a=4, b=6;
	swap(a,b);

	cout << a << "   " << b << endl;

	return 0;
}
