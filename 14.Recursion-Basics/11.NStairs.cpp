#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n <= 1)
        return 1;

    return climbStairs(n - 1) + climbStairs(n - 2);
}


int main()
{
    int n=4;
    cout<<climbStairs(n);
    return 0;
}