#include <iostream>
#include <deque>
using namespace std;

int main() {

    int n, q, d;
    cin >> n >> q;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while(q--) {
        //deqMax menampung nilai max masing2 subarray
        //nilai max subarray disimpan di depan
        deque<int> deqMax;
        int min = 1000001;
        cin >> d;

        for(int i = 0; i < d; i++) { 
            while(!deqMax.empty() && arr[i] > deqMax.back()) {
                deqMax.pop_back();
            }
            deqMax.push_back(arr[i]);
        }

        for(int i = d; i < n; i++) {
            if(deqMax.front() < min) {
                min = deqMax.front();
            }

            if(!deqMax.empty() && deqMax.front() == arr[i-d]) {
                deqMax.pop_front();
            }

            while(!deqMax.empty() && arr[i] > deqMax.back()) {
                deqMax.pop_back();
            }
            deqMax.push_back(arr[i]);
        }

        if(deqMax.front() < min) { 
            cout << deqMax.front() << endl;
        } else {
            cout << min << endl;
        }
       
    }

    return 0;
}