#include <iostream>
using namespace std;

int main()
{
	enum test {a, b};
	
	test c = b;

	test d = a;

	std::cout << c << " " << d << std::endl;
}
