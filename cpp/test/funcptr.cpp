#include <iostream>
using namespace std;

void a()
{
	std::cout << "Func a!" << std::endl;
}

void b()
{
	std::cout << "Func b! " << std::endl;
}

void callf(void ())
{
	f();
}

int main(int argc, const char *argv[])
{
	
	void (*p)() = &b;

	callf(p);

	(*p)();
	p = a;

	p();
	
	callf(p);

	return 0;
}
