#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
	int i = 8;

	int b = (i == 6 ? (3,5,66):(i+=77,i)) ;

	cout << b << endl;

	return 0;
}
