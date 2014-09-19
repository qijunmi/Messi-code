#include <iostream>
#include <string>
using namespace std;

string make_plural(size_t ctr, const string &word,const string &ending)
{
	return (ctr == 1) ? word : word + ending;
}

int main()
{
	string s = make_plural(2,"school","s");

	cout << s << endl;

	return 0;
}
