#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
	vector< string > vs;
	list< string > ls;
	string str;

	while(cin >> str)
	{
		ls.push_front(str);
		vs.push_back(str);
	}

	vector< string >::iterator iter = vs.begin();
	list< string >::iterator liter = ls.begin(); 
	for(; iter != vs.end(); ++iter,++liter) {
		cout << *iter << endl
			 << *liter << endl;
	}

	return 0;
}
