#include <iostream>
using namespace std;

int TrailingZero(int n)
{
    int count=0;
    while (n >= 5)
    {
        count+= n/5 ;
        n /= 5;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << TrailingZero(num);
    return 0;
}