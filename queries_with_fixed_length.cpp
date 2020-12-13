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

        if(n == d) { //nilai deqMin = deqMax (hanya 1 subarray)
            for(int i = 0; i < n; i++) {
                if(deqMax.empty()) {
                    deqMax.push_front(arr[i]);
                }else if(!deqMax.empty() && arr[i] > deqMax.front()) {
                    deqMax.pop_front();
                    deqMax.push_front(arr[i]);
                }
            }
            cout << deqMax.front() << endl;
        }

        else {     
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

            if(deqMax.front() < deqMin.back()) {
                cout << deqMax.front() << endl;
            } else {
                cout << deqMin.back() << endl;
            }
        } 
    }

    return 0;
}