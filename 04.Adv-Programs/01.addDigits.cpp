//Ex-23 -> 2+3=5
//Ex2-555 -> 5+5+5=15 -> 15-5+1=6

#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number :";
    cin>>num;
    while (num > 9)
    {
        int ans=0,rem;
        while (num!=0)
        {
            rem=num%10;
            num/=10;
            ans+=rem;
        }
        num=ans;
        
    }
    cout<<num;
    
    return 0;
}
