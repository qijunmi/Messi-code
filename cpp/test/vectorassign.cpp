#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char *argv[])
{
	vector< int > iv1(10,-1);

	vector< int > iv2(3,9);

	cout << "Before:" << endl
		 << "iv1:"	  << iv1.size() << endl
		 << "iv2:"	  << iv2.size() << endl;

	//iv1 = iv2;
	vector< int >::iterator iter1 = iv2.begin();
	vector< int >::iterator iter2 = iv2.end();
	iv1.assign(iter1,iter2);

	cout << "After:" << endl
		 << "iv1:"	  << iv1.size() << endl
		 << "iv2:"	  << iv2.size() << endl;



	
	
	return 0;
}
