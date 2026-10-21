#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    int count=0;
    while (n)
    {
        count++;
        n/=10;
    }
    return count;
}

int Armstrong(int num , int digit){
    int n=num,ans=0,rem;
    while (n)
    {
        rem=n%10;
        n/=10;
        ans=ans + pow(rem,digit);
    }
    if (ans==num)
    {
        return 1;
    }else{
        return 0;
    }
    

}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int digit=countDigit(num);
    if (Armstrong(num,digit))
    {
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }   
    return 0;
}