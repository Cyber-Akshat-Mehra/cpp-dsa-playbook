#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    if(n==0){
        cout<<1;
        return 1;
    }

    int ans=0 , rem, mul=1;
    while(n){
        rem=n%2;
        rem=rem^1;
        n=n/2;
        ans=ans+rem*mul;
        mul=mul*2;
    } 
    cout<< "Result : " <<ans;
    return 0;
}