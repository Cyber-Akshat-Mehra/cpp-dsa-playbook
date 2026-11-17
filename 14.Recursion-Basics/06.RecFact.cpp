#include <iostream>
using namespace std;

int fact(int n)
{
    //Base Case 
    if (n==1 || n==0)
    {
        return 1;
    }
    
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the Number :- ";
    cin>>n;
    if (n<0)
    {
        cout<<"Factorial is not possible";
        return 0;
    }
    cout<<fact(n);
    return 0;
}