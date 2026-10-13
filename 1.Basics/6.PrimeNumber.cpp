#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    if(n<2){
        cout <<"Not a Prime Number";
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            cout<<"Not a Prime Number";
            return 0;
        }
    }
    cout<<"Prime Number";
    return 0;
}