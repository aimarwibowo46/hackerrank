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
        //deqMin menampung nilai min dari deqMax
        deque<int> deqMax, deqMin; 
        cin >> d;

        for(int i = 0; i < d; i++) { //nilai max subarray disimpan di depan
            while(!deqMax.empty() && arr[i] > deqMax.back()) {
                deqMax.pop_back();
            }
            deqMax.push_back(arr[i]);
        }

        for(int i = d; i < n; i++) {
            if(deqMin.empty()) { //nilai minimal dari deqMax disimpan di belakang
                deqMin.push_back(deqMax.front());
            }else if(!deqMin.empty() && deqMax.front() < deqMin.back()) {
                deqMin.pop_back();
                deqMin.push_back(deqMax.front());
            }

            if(!deqMax.empty() && deqMax.front() == arr[i-d]) {
                deqMax.pop_front();
            }

            while(!deqMax.empty() && arr[i] > deqMax.back()) {
                deqMax.pop_back();
            }
            deqMax.push_back(arr[i]);
        }

        if(deqMin.empty() || (deqMax.front() < deqMin.back())) { //deqMin empty untuk kasus n = d
            cout << deqMax.front() << endl;
        } else {
            cout << deqMin.back() << endl;
        }
       
    }

    return 0;
}