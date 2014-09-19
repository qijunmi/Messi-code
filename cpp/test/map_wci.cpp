#include <iostream>
#include <string>
#include <utility>
#include <map>
using namespace std;

int main(int argc, const char *argv[])
{
	map< string,int > word_count;
	pair< map< string,int >::iterator,bool > iter;
	string str;
	while(cin >> str)
	{
		iter = word_count.insert(pair< string,int >(str,1));
		if(iter.second == true)
		{
			cout << "insert!"<< endl;
		}
		else
		{
			cout << "exist!" << endl;
			iter.first->second++;
		}
	}

	for (map<string,int>::iterator map_iter = word_count.begin(); map_iter != word_count.end(); ++map_iter) {
		cout << map_iter->first << " " << map_iter->second << endl;
	}

	return 0;
}
