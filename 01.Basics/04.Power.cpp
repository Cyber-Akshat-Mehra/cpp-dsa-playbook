#include <iostream>
using namespace std;
int main()
{
    int n, p , r;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Enter the Power : ";
    cin >> p;
    r=n;
    for (int i = 1; i < p; i++)
    {
        
        r = r * n;
    }
    cout << "The result is : " << r;
}