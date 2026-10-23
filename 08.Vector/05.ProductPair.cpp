// Given an array, arr[] of positive integers, and a number x, find if there is a pair in arr[] with a product equal to x. Return true if there exists such pair otherwise false.

// Examples:

// Input: arr[] = [10, 20, 9, 40], x = 400
// Output: true
// Explanation: As 10 * 40 = 400, the answer is true.

// Note :- Other methods to solve
// 1. Bruteforce
// 2. Binary Search Method


// 3.  Two pointer method
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

bool isProduct(vector<int> &numbers, long long target)
{
        unordered_set<long long> seen;

        for (long long num : numbers) {

            // Case: num = 0
            if (num == 0) {
                if (target == 0) return true;
                continue;
            }

            // Check if valid pair possible
            if (target % num == 0) {
                long long needed = target / num;

                if (seen.count(needed)) {
                    return true;
                }
            }

            seen.insert(num);
        }

        return false;
}

int main()
{
    vector<int> v = {10, 20, 9, 40};
    bool result = isProduct(v, 400); 
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