#include <iostream>
#include <string>
#include <fstream>
using namespace std;

istream& input(istream &in)
{
	int val;
	
	while (in >> val, !in.eof()) {
		if(in.bad())
			;//throw std::runtime_error("bad input!");

		if(in.fail())
		{
			cerr << "Get input failed!";
			in.clear();
			in.ignore(200,' ');
			continue;
		}

		cout << val << endl;
	}

	in.clear();
	return in;
}

int main(int argc, const char *argv[])
{
	
	//istream in;
	string file = "test";
	ifstream ifile;
	ifile.open(file.c_str());
	input(ifile);

	return 0;
}
