#include <iostream>
using namespace std;

int main()
{

	int i = 9;
	enum test {fri = 9,sat};
	int &ref = i;
	int &ref2 = i;
	++ref;
	++ref;
	++ref2;
	cout << i << ref2 << endl;

	return 0;
}
