#include<iostream>
using namespace std;

int SqrSum(int n)
{
    if(n==1)
    return 1;

    return n*n+SqrSum(n-1);
}

int main()
{
    int n=5;
    cout<<SqrSum(n);
    return 0;
}