#include <iostream>
using namespace std;

bool prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2 ; i<n ; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    cout<<"Enter the Num : ";
    cin>>num;
    int ans=prime(num);
    if(ans == 1){
        cout<<"Prime Number";
    }else{
        cout<<"Not a Prime Number";
    }

    return 0;
}
