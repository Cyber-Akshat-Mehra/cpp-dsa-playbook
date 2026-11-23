// Josephus Problem || Predict the winner
// There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. 
// More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n, 
// and moving clockwise from the nth friend brings you to the 1st friend.


// Using extra array

// Simulation + Recursion
// Uses a visited/person array to track eliminated people.

// Steps:

// 1. Find the (k-1)th alive person.
// 2. Eliminate that person.
// 3. Move to the next alive person.
// 4. Decrease person_left.
// 5. Repeat recursively until one person remains.

// Complexity:

// 1. Time: O(n²)
// 2. Auxiliary Space: O(n)


#include <iostream>
#include <vector>
using namespace std;

int winner(vector<bool> &person, int n, int index, int person_left, int k)
{
    if (person_left == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (person[i] == 0)
                return i;
        }
    }

    // Find the position and eliminate/kill
    int kill = (k - 1) % person_left;
    while (kill--)
    {
        index = (index + 1) % n;
        while (person[index] % n == 1)
            index = (index + 1) % n; // skip the killed person
    }

    person[index] = 1;

    // Next Alive Person
    while (person[index] % n == 1)
        index = (index + 1) % n;

    return winner(person, n, index, person_left, k);
}

int main()
{
    int n=5,k=3;
    vector<bool> person(n,0);
     cout << winner(person,n,0,n,k);
    return 0;
}