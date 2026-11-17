#include<iostream>
using namespace std;
void Counter(int n)
{
    if (n==0)
    {
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    Counter(n-1);    
}
int main()
{
    int n=5;
    Counter(n);
    return 0;
}