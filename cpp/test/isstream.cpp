#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(int argc, const char *argv[])
{
	istringstream str("This is a line");	
	ostringstream ostr;

	string word;

	int a = 512;

	//while(str >> word)
	//	cout << word << endl;
	
	//ostr << a;
	ostr  << "here " << a;

	cout << ostr.str() << endl;

	return 0;
}
