#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n, x, q, value;
	cin >> n;

	vector<int> v1;
	while(n--) {
		cin >> value;
		v1.push_back(value);
	}

	cin >> q;
	while(q--) {
		cin >> x;
		vector<int>::iterator lo, hi;
		lo = lower_bound(v1.begin(), v1.end(), x); 
		hi = upper_bound(v1.begin(), v1.end(), x);
		if(lo != hi) {
			cout << "Yes " << lo - v1.begin() + 1 << endl; // 1 based index
		} else {
			cout << "No " << hi - v1.begin() + 1 << endl; // 1 based index
		}
	}

	return 0;

}