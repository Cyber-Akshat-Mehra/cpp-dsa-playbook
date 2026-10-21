#include <iostream>
using namespace std;

bool CanWinNim(int n)
{
    if (n % 4 == 0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;
    if (CanWinNim(num))
    {
        cout << "You can win";
    }
    else
    {
        cout << "You Lose";
    }
    return 0;
}