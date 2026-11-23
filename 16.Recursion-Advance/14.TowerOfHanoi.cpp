// Tower of Hanoi
// For n disks, there are 3 rods:

// src → Source rod
// help → Helper rod
// dest → Destination rod

// The goal is to move all disks from source → destination, following:

// Move only one disk at a time
// Never place a larger disk on a smaller disk


//               Steps:

// Move n-1 disks from source → helper.
// Move the largest disk n from source → destination.
// Move n-1 disks from helper → destination.
// Base case: if n == 1, directly move the disk.

//              Pattern
// n−1 → Move largest → n−1

//              Complexity
// Time: O(2ⁿ)
// Auxiliary Space: O(n) — recursion stack
// Total moves: 2ⁿ − 1



#include <iostream>
#include <cmath>
using namespace std;

void tohcal(int n, int src, int help, int dest)
{
    if (n == 1)
    {
        cout << "move disk " << n << " from rod " << src << " to rod " << dest << endl;
        return;
    }

    tohcal(n - 1, src, dest, help);
    cout << "move disk " << n << " from rod " << src << " to rod " << dest << endl;
    tohcal(n - 1, help, src, dest);
}
int main()
{
    int n = 3;
    tohcal(n, 1, 2, 3);
    cout << "Total " << pow(2, n)-1 << " Steps is to be taken";
    return 0;
}