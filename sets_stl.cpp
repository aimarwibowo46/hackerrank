#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	
	int n, q, x;
	cin >> n;
	
	set<int> s1;

	while(n--) {
		cin >> q >> x;
		if(q == 1) {
			s1.insert(x);
		} else if(q == 2) {
			s1.erase(x);
		} else if(q == 3) {
			if(s1.count(x)) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}

	return 0;

}