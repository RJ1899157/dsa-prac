#include <iostream>
using namespace std;

int main() {
    int n;
    int sum=0;
    cout << "Enter number of first N natural numbers: ";
    cin >> n;
    if (n==0){
        cout<<"Sum is 0";
        return 0;
    }
    
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}