#include <iostream>
using namespace std;

long long int sqrtInt(long long int x)
{
    int left = 1, right = x, ans = -1;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long int sqr = mid * mid;
        if (sqr == x)
            return mid;
        else if (sqr < x)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    cout << sqrtInt(n);
}