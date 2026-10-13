#include <iostream>
using namespace std;
int main() {
    int n ,a=0,b=1,temp;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        temp=a;
        a=b;
        b=temp+b;
    }

}