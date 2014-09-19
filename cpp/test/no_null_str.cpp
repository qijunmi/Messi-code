#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[])
{
	
	char no_null[] = {'A','B'};

	string str(no_null,10);

	cout << str << endl
		 << "Size:" << str.size() << endl
		 << "Capacity:" << str.capacity() << endl;

	string &ref = str.erase(2,8);

	cout << str << endl
		 << "Size:" << str.size() << endl
		 << "Capacity:" << str.capacity() << endl;

	cout << str << endl
		 << "Size:" << str.size() << endl
		 << "Capacity:" << str.capacity() << endl;

	cout << str << endl
		 << str.compare("AbCD") << endl;

	return 0;
}
