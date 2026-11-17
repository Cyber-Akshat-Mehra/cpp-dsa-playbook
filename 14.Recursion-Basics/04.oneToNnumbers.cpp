#include <iostream>
using namespace std;

void Print(int N)
{
    if (N == 1)
    {
        cout << 1 << endl;
        return;
    }
    Print(N - 1);
    cout << N << endl;
}

int main()
{
    int n = 7;
    Print(n);
    return 0;
}