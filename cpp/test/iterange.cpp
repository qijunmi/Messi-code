#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
	int a[5] = {4,6,7,1,6};

	vector< int > va(a,a);

	if(va.empty())
	{
		cerr << "empty!" << endl;
		return -1;
	}

	int i = 0;
	while(i < 5)
		cout << va[i++] << endl;

	return 0;
}
