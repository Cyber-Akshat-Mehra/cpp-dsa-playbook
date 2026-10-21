#include <iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for (int i = 1; i <= n; i++)
    {
        ans*=i;
    }
    return ans;
    
}
int main() {
    int num;
    cout<<"Enter the Num : ";
    cin>>num;
    int result=fact(num);
    cout<<"Result : "<<result;
}