#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    while (x != 0) {
        int n= x % 10;
        cout << n;
        x = x / 10;
    }
    cout << endl;
    return 0;
}