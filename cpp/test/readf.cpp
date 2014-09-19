#include <iostream>
using namespace std;

istream & readfile(istream &in)
{
	in.clear();
	string str;
	while (in >> str, !in.eof()) {
		if(in.bad())
		{
			;//throw runtime_error("test");
		}
		if(in.fail())
		{
			cerr << "Get input failed,try again!";
			in.clear();
			continue;
		}

		cout << str << endl;
	}

	cout << str << endl;

	in.clear();

	return in;
}

/*int main(int argc, const char *argv[])
{
	readfile(cin);
	return 0;
}*/
