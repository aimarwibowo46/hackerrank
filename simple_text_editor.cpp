#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

    int n, q, k;
    string str, w;
    stack<string> myStack;
    cin >> n;
    while(n--) {
        cin >> q;
        if(q == 1) {
            cin >> w;
            str += w;
            myStack.push(str); 
        } else if(q == 2) {
            cin >> k;
            while(k--) {
                str.pop_back();
            }
            myStack.push(str);
        } else if(q == 3) {
            cin >> k;
            cout << str[k-1] << endl;
        } else if(q == 4) {
            myStack.pop();
            if(myStack.empty()) { // penting karena kondisi awal adalah string kosong
                str = "";
            } else {
                str = myStack.top();
            }
        }
    }

    return 0;
}