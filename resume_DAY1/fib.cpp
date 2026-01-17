#include <iostream>
using namespace std;

int main(){
    int x=0, y=1, z, n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: "<<endl;
    for(int i=0; i<n; i++){
        if(i<=1)
            z=i;
        else{
            z=x+y;
            x=y;
            y=z;
        }
        cout<<z<<" ";
    }       
}