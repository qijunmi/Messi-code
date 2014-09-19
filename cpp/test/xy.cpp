#include <iostream>
using namespace std;

class Y;

class X
{
	Y * y;
};

class Y
{
	X x;
};

int main(int argc, const char *argv[])
{
	
	return 0;
}
