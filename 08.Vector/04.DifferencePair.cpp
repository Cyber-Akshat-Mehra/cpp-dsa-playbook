// Problem Description

// Given an one-dimensional unsorted array A containing N integers.

// You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

// Return 1 if any such pair exists else return 0.
// // Input :
// //  A = [5, 10, 3, 2, 50, 80]
// //  target = 78
// // Pair (80, 2) gives a difference of 78.

// Note :- Other methods to solve
// 1. Bruteforce
// 2. Binary Search Method


// 3.  Two pointer method
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool difference(vector<int> &numbers, int target)
{
    sort(numbers.begin(), numbers.end());
    int start = 0, end = numbers.size() - 1;
    while (start < end)
    {
        int diff = numbers[end] - numbers[start];
        if (diff == target)
        {
            return true;
        }
        else if (diff < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return false;
}

int main()
{
    vector<int> v = {5, 10, 3, 2, 50, 80};
    bool result = difference(v, 78); 
    if (result)
    {
        cout << "Pair exists";
    }
    else
    {
        cout << "Pair does not exist";
    }
    return 0;
}