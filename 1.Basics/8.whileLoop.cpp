//sum of n natural number 

#include<iostream>
using namespace std;
int main() {
    int n, i=1  ,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"Result : "<<sum; 
    
    return 0;
}