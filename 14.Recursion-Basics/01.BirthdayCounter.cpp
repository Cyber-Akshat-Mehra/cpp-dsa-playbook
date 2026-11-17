#include<iostream>
using namespace std;
void BirthdayCounter(int n)
{
    if (n==0)
    {
        cout<<"Happy Birthday"<<endl;
        return;
    }
    cout<<n<<" days left for Birthday"<<endl;
    BirthdayCounter(n-1);    
}
int main()
{
    int n=3;
    BirthdayCounter(n);
    return 0;
}
