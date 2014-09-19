#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream ifile("in");
	ofstream ofile("out");

	//ifile.open("in");
	//ofile.open("out");

	while(cin >> ofile)
	{
		cout << "test" << endl;
	}

	ifile.close();
	ifile.clear();
	ofile.close();
	ofile.clear();

	return 0;
}
