#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
	string str;

	cin >> str;

	string::iterator iter = str.begin();

	while(iter != str.end())
	{
		*iter++ -= 'a' - 'A';
	}

	cout << str << endl;

	return 0;
}
