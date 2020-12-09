#include <iostream>
using namespace std;

int main() {

    int n, d;
    cin >> n >> d;
    int arr[n], arr2[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    d = d % n;
    for(int i = 0; i < n; i++) {
        if(i-d >= 0) {
            arr2[i-d] = arr[i];
        } else {
            arr2[n-d+i] = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}