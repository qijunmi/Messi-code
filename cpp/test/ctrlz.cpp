#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
	vector< int > iv;
	
	int i;
	while(cin >> i)
	{
		iv.push_back(i);
	}

	vector< int >::iterator iter = iv.begin();
	
	while(iter != iv.end())
	{
		cout << *iter++ << endl;
	}

	return 0;
}
