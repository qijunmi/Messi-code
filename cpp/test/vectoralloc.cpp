#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
	vector< int > va(10,3);
	
	va.reserve(20);

	cout << "Size:" << va.size() << endl
		 << "Capacity:" << va.capacity() << endl;

	int i = 0;
	while(i < 25)
	{
		va.push_back(i++);
	}

	while(i > 0)
	{
		va.push_back(i--);
	}
	while(i < 25)
	{
		va.push_back(i++);
	}

	cout << "Size:" << va.size() << endl
		 << "Capacity:" << va.capacity() << endl;

	return 0;
}
