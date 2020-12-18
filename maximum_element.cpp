#include <iostream>
#include <stack>
#include <deque>
using namespace std;

int main() {

    int n, q;
    stack<int> myStack;
    deque<int> myMax;
    cin >> n;
    while(n--) {
        cin >> q;
        if(q == 1) {
            int val;
            cin >> val;
            myStack.push(val);
            if(myMax.empty() || val <= myMax.back()) {
                myMax.push_back(val);
            } else if(val >= myMax.front()) {
                myMax.push_front(val);
            } else {
                auto it = myMax.begin();
                while(*it > val) it++;
                myMax.insert(it, val);
            }
        } else if(q == 2) {
            if(myMax.front() == myStack.top()) {
                myMax.pop_front();
            } else {
                auto it = myMax.begin();
                while(*it != myStack.top()) it++;
                myMax.erase(it);
            }
            myStack.pop();
        } else if(q == 3 && !myMax.empty()) {
            cout << myMax.front() << endl;
        }
    }

    return 0;
}