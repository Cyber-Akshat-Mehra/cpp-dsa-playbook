#include<iostream>
using namespace std;

int pow(int num, int n)
{
    if(n==0)
    return 1;

    return num*pow(num,n-1);
}

int main()
{
    int n=5;
    cout<<pow(2,n);
    return 0;
}