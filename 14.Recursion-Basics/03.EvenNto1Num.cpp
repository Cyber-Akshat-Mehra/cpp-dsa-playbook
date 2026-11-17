#include <iostream>
using namespace std;
void evenNum(int n)
{
    if (n == 2 && n % 2 == 0)
    {
        cout << n << endl;
        return;
    }
    else if (n % 2 == 0)
        cout << n << endl;
    evenNum(n - 1);
}
int main()
{
    int n = 10;
    evenNum(n);
    return 0;
}