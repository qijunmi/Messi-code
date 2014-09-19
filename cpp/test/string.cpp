#include <iostream>
#include <string.h>
using namespace std;

int main()
{

	string str1("test");

	cout << str1.size() << endl
		 << str1[4] << endl;

	if(str1[4] == '\0')
		cout << "yes" << endl;

	return 0;
}
