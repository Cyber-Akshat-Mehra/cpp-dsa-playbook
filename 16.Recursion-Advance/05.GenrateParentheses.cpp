// Generate Parentheses Using Recursion

// Steps

// 1.  Start with an empty string.
// 2. Keep track of:
//       open = number of ( used.
//       close = number of ) used.
// 3. If open < n, add ( and call recursion.
// 4. If close < open, add ) and call recursion.
// 5. When open == n and close == n, the string is complete.
// 6. Store/print the valid combination.

// Example: n = 3
//      Output:
//      ((()))
//      (()())
//      (())()
//      ()(())
//      ()()()

// Time Complexity: O(Cₙ × n)
// Auxiliary Space: O(n) recursion depth
// If storing all answers: O(Cₙ × n)

#include <iostream>
#include <vector>
using namespace std;

void GenParent(int n, int left, int right, vector<string> &ans,
               string &temp)
{

    if (left + right == 2 * n)
    {
        ans.push_back(temp);
        return;
    }

    // Left Parentheses
    if (left < n)
    {
        temp.push_back('(');
        GenParent(n, left + 1, right, ans, temp);
        temp.pop_back();
    }

    // Right Parentheses
    if (right < left)
    {
        temp.push_back(')');
        GenParent(n, left, right + 1, ans, temp);
        temp.pop_back();
    }
}

int main()
{
    int n = 3;
    vector<string> ans;
    string temp;
    GenParent(n, 0, 0, ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
