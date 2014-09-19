#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(int argc, const char *argv[])
{
	
	vector< pair<string,int> > vp;
	vp.reserve(50);
	
	pair< string,int > p;

	int i = 0;
	
	while (cin >> p.first >> p.second) {
		vp.push_back(p);
	}

	for (vector< pair< string,int > >::iterator iter = vp.begin(); iter != vp.end(); *iter++) {
		cout << iter->first << endl;
	}

	for (i = 0; i < vp.size(); ++i) {
		cout << vp[i].first << vp[i].second << endl;
	}

	return 0;
}
