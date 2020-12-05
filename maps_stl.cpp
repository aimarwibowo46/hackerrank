#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	
	int n, q, value;
	string key;
	cin >> n;

	map<string, int> myMap;

	while(n--) {
		cin >> q;
		if(q == 1) {
			cin >> key >> value;
			if(myMap.count(key)) {
				auto it = myMap.find(key);
				it->second += value;
			} else {	
				myMap.insert(pair<string, int>(key, value));
			}
		} else if(q == 2) {
			cin >> key;
			myMap.erase(key);
		} else if(q == 3) {
			cin >> key;
			if(myMap.count(key)) {
				auto it = myMap.find(key);
				cout << it->second << endl;
			} else {
				cout << "0" << endl;
			}
		}
	}

	return 0;

}