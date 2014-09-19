#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, const char *argv[])
{
	
	istream_iterator< int > in_iter(cin);
	istream_iterator< int > end;

	while(in_iter != end)
	{
		cout << *in_iter << endl;
	}

	return 0;
}
