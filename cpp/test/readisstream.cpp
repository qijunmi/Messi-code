#include <iostream>
#include <sstream>
#include "readf.cpp"
using namespace std;


int main(int argc, const char *argv[])
{
	string line;
	if(line.empty())
		cout << "yeah" << endl;
	
	getline(cin,line);
	
	//line += " ";

	istringstream in(line);

	readfile(in);
	return 0;
}
