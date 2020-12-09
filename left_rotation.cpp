#include <iostream>
#include <list>
using namespace std;

int main() {

    int n, d, value;
    list<int> myList;
    cin >> n >> d;
    while(n--) {
        cin >> value;
        myList.push_back(value);
    }

    while(d--) {
        int temp = myList.front();
        myList.push_back(temp);
        myList.pop_front();
    }

    for(auto it = myList.begin(); it != myList.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}