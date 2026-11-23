// Binary Numbers with More 1s in All Prefixes
// Given a positive integer n, generate all n-bit binary numbers such that, for every prefix of each binary number,
// the count of 1's is greater than or equal to the count of 0's.
// Return the binary numbers in decreasing order of their decimal value.

// Input: n = 3
// Output: ["111", "110", "101"]
// Explanation: Valid numbers are those where each prefix has more 1s than 0s.
// 111: all its prefixes (1, 11, and 111) have more 1s than 0s.
// 110: all its prefixes (1, 11, and 110) have more 1s than 0s.
// 101: all its prefixes (1, 10, and 101) have more 1s than 0s.
// So, the output is "111, 110, 101".


//                      Steps
// 1. Goal: Generate binary strings of length n where 0 ≤ 1 at every point.
// 2. Base case: temp.size() == n → store answer.
// 3. Choice 1: Always allowed → add 1.
// 4. Choice 0: Allowed only when zero < one.
// 5. Backtracking: push_back() → recursive call → pop_back().

//                  Pattern:
//          Choose → Recurse → Backtrack

//              Complexity:
// Time: O(n × C) where C = number of valid strings
// Auxiliary Space: O(n)
// Output Space: O(n × C)

#include <iostream>
#include <vector>
using namespace std;
void find(int n, vector<string> &ans, string temp, int zero, int one)
{
    if (temp.size() == n)
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back('1');
    find(n, ans, temp, zero, one + 1);
    temp.pop_back();

    if (zero < one)
    {
        temp.push_back('0');
        find(n, ans, temp, zero + 1, one);
        temp.pop_back();
    }
}

int main()
{
    int n = 2;
    vector<string> ans;
    string temp;
    find(n, ans, temp, 0, 0);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}