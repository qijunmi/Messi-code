#include <iostream>
using namespace std;

class Person{
	private:
		string name;
		string address;

	public:
		Person():name("andy"), address("xa"){}

	string getName() const
	{
		return this->name;
	}

	string getAdress() const
	{
		return this->address;
	}

};

int main(int argc, const char *argv[])
{
	Person p;
	cout << p.getName() << " "  << p.getAdress() << endl;
	return 0;
}
