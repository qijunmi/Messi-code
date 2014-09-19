#include <iostream>
using namespace std;

int main()
{
	cout << "1" << flush << "2" << flush;

	cout << unitbuf << "1" << "2" << nounitbuf;

	int ival = 0;

	cin.tie(&cout);

	cin >> ival;

	return 0;
}
