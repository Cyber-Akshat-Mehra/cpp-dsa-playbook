// Josephus Problem || Predict the winner
// Mathematical Recursion

// Steps:

// If n == 1, return 0.
// Solve the problem for n-1.
// Shift the result by k.
// Use % n to handle the circular positions.
// Return the final winner.

// Complexity:

// Time: O(n)
// Auxiliary Space: O(n)


#include <iostream>
#include <vector>
using namespace std;

 int winner(int n, int k) {
        if (n == 1)
            return 0;

        return (winner(n - 1, k) + k) % n;
    }

int main()
{
    int n=5,k=2;
     cout << winner(n,k)+1;
    return 0;
}