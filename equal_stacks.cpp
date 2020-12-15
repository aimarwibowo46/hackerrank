#include <iostream>
#include <deque>
using namespace std;

int main() {

    int n1, n2, n3, h1 = 0, h2 = 0, h3 = 0, val;
    cin >> n1 >> n2 >> n3;
    deque<int> d1, d2, d3;
    while(n1--) {
        cin >> val;
        d1.push_back(val);
        h1 += val;
    }
    while(n2--) {
        cin >> val;
        d2.push_back(val);
        h2 += val;
    }
    while(n3--) {
        cin >> val;
        d3.push_back(val);
        h3 += val;
    }

    while(h1 != h2 || h2 != h3 || h1 != h3) {
        if(h1 > h2 || h1 > h3) {
            h1 -= d1.front();
            d1.pop_front();
        } else if(h2 > h1 || h2 > h3) {
            h2 -= d2.front();
            d2.pop_front();
        } else if(h3 > h1 || h3 > h2) {
            h3 -= d3.front();
            d3.pop_front();
        } 
    }

    cout << h1 << endl; //h1 = h2 = h3

    return 0;
}