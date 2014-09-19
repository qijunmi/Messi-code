#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, const char *argv[])
{
	map< string,int > word_count;

	string str;
	while(cin >> str)
	{
		++word_count[str];
	}

	for (map<string,int>::iterator map_iter = word_count.begin(); map_iter != word_count.end(); ++map_iter) {
		cout << map_iter->first << " " << map_iter->second << endl;
	}

	return 0;
}
