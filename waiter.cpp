#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 10000 
  
// Sieve of Eratosthenes from geeksforgeeks
void SieveOfEratosthenes(vector<int> &primes) {  
    bool IsPrime[MAX_SIZE];  
    memset(IsPrime, true, sizeof(IsPrime));  
    
    for(int p = 2; p * p < MAX_SIZE; p++) {  
        // If IsPrime[p] is not changed, then it is a prime  
        if(IsPrime[p] == true) {  
            // Update all multiples of p greater than or   
            // equal to the square of it  
            // numbers which are multiple of p and are  
            // less than p^2 are already been marked.   
            for(int i = p * p; i <  MAX_SIZE; i += p) {
                IsPrime[i] = false; 
            }       
        }  
    }  
    
    // Store all prime numbers  
    for(int p = 2; p < MAX_SIZE; p++) {
       if(IsPrime[p]) primes.push_back(p); 
    }         
}  

int main() {

    vector<int> primes;
    SieveOfEratosthenes(primes);

    stack<int> a, b;
    deque<int> temp;
    int n, q, val;
    cin >> n >> q;
    while(n--) {
        cin >> val;
        a.push(val);
    }

    for(int i = 1; i <= q; i++) {
        while(!a.empty()) {
            if(a.top() % primes[i-1] == 0) {
                b.push(a.top());
                a.pop();
            } else {
                temp.push_back(a.top());
                a.pop();
            } 
        }

        while(!temp.empty()) {
            a.push(temp.front());
            temp.pop_front();
        }

        while(!b.empty()) {
            cout << b.top() << endl;
            b.pop();
        }
    }

    while(!a.empty()) {
        cout << a.top() << endl;
        a.pop();
    }

    return 0;
}