#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

    int n;
    string str;
    cin >> n;
    while(n--) {
        cin >> str;
        stack<char> myStack;

        int cek = 1;
        for(int i = 0; i < str.length(); i++) {
            if(myStack.empty() && (str[i] == '}' || str[i] == ')' || str[i] == ']')) {
                cek = 0;
                break;
            }

            if(str[i] == '{' || str[i] == '(' || str[i] == '[') {
                myStack.push(str[i]);
            } else if(str[i] == '}' && myStack.top() == '{') {
                myStack.pop();
            } else if(str[i] == ')' && myStack.top() == '(') {
                myStack.pop();
            } else if(str[i] == ']' && myStack.top() == '[') {
                myStack.pop();
            } else { 
                cek = 0;
                break;
            }
        }

        if(cek == 1 && myStack.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}