#include<iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter value for a: ";
    cin >> a;
    
    cout << "Enter value for b: ";
    cin >> b;
    
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else if (a < b) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is equal to b" << endl;
    }
    
    return 0;
}