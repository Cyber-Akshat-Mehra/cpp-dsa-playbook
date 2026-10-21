// Can I form Rectangle by given 4 number

#include <iostream>
using namespace std;

bool RectPossible(int a, int b, int c, int d)
{
    if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a, b, c, d;
    cout << "Enter the sides :  ";
    cin >> a >> b >> c >> d;
    
    if ( RectPossible(a,b,c,d) )
    {
       cout<<"Yes! Possible ";
    }else{
        cout<<"Not Possible";
    }
    
    return 0;
}