#include <iostream>
using namespace std;

void PrintEven(int n)
{
    if (n == 2)
    {
        cout << n << endl;
        return;
    }
    PrintEven(n - 2);
    cout << n << endl;
}

int main()
{
    int n = 9;
    if (n % 2 == 1)
        n--;

    PrintEven(n);

    return 0;
}