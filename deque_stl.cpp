#include <stdio.h>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    
    int t, n, k, value;
    scanf("%d", &t);
    while(t--) {
        deque<int> myDeq;
        scanf("%d %d", &n, &k);
        int arr[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        for(int i = 0; i < k; i++) {
            while(!myDeq.empty() && arr[i] >= arr[myDeq.back()]) {
                myDeq.pop_back();
            }
            myDeq.push_back(i);
        }

        for(int i = k; i < n; i++) {
            printf("%d ", arr[myDeq.front()]);

            if(!myDeq.empty() && myDeq.front() == i-k) {
                myDeq.pop_front();
            }

            while(!myDeq.empty() && arr[i] >= arr[myDeq.back()]) {
                myDeq.pop_back();
            }
            myDeq.push_back(i);
        }
        printf("%d\n", arr[myDeq.front()]);
    }
    return 0;
}