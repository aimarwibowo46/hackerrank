#include <iostream>
using namespace std;

int main() {

    int n, index = 0;
    long long tank = 0, petrol, distance;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> petrol >> distance;
        tank += (petrol - distance);
        if(tank < 0) {
            index = i + 1;
            tank = 0;
        }
    }
    cout << index << endl;

    return 0;
}