#include <iostream>
using namespace std;

int main()
{
	const int ci = 9;
	int i = 19;

	const int &crint = i;
	int &rint = i;

	const int &crcint = ci;
	//int &rcint = ci;

	++i;

	return 0;
}
