#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int n, q, col, value, x, y;
	cin >> n >> q;
	vector<vector<int>> angka; // Membuat vektor 2 dimensi (baris dan kolom)

	for(int i = 0; i < n; i++) {
		cin >> col;
		vector<int> kolom; // vektor kolom
		for(int j = 0; j < col; j++) {
			cin >> value;
			kolom.push_back(value); // masukkan setiap input ke vektor kolom
		}
		angka.push_back(kolom);
	}

	while(q--) {
		cin >> x >> y;
		cout << angka[x][y] << endl;
	} 

	return 0;
}
