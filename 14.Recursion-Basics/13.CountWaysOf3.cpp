// Count ways with 3 moves

// A child is running up a staircase with n steps and can hop either 1 step, 2 steps, or 3 steps at a time. Return the of count how many possible ways the child can run up the stairs.

// Examples:

// Input: n = 3
// Output: 4
// Explanation: The following are 4 different ways
// 1 step + 1 step + 1 step 
// 1 step + 2 steps 
// 2 steps + 1 step 
// 3 steps


#include<iostream>
using namespace std;

int countWays(int n) {
    if (n == 0)
        return 1;

    if (n < 0)
        return 0;

    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}

int main()
{
    int n=3;
    cout <<countWays(n);
}