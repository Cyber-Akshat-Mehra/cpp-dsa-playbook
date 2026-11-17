#include <iostream>
using namespace std;

int NaturalN(int n)
{
    //Base Case 
    if (n==1)
    {
        return 1;
    }
    
    return n+NaturalN(n-1);
}
int main()
{
    int n;
    cout<<"Enter the Number :- ";
    cin>>n;
    cout<<NaturalN(n);
    return 0;
}