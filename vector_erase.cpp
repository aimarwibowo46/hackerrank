#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n, x, a, b, value;
	cin >> n;

	vector<int> v1;
	while(n--) {
		cin >> value;
		v1.push_back(value);
	}

	cin >> x;
	v1.erase(v1.begin() + x - 1);
	cin >> a >> b;
	v1.erase(v1.begin() + a - 1, v1.begin() + b - 1);

	cout << v1.size() << endl; 
	for(auto it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;

}