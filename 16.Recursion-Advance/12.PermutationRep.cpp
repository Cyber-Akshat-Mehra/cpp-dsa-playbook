// Permutation with Duplicates

//              Steps:

// 1. Start from index = 0.
// 2. Create a use array for the current recursion level.
// 3. Loop from index to n-1.
// 4. If the value has not been used at this level:
//      Swap it with arr[index].
//      Recursively call for index + 1.
//      Swap back (backtrack).
//      Mark the value as used.
// 5. When index == n, store the permutation.

//                  Pattern
// Check duplicate → Swap → Recursion → Swap back → Mark used



//              Complexity

// If U = number of unique permutations:
// Time: O(n × U)
// Auxiliary Space: O(n)
// Output Space: O(n × U)
// For all unique elements, U = n!, so:

// Time = O(n × n!)
// Space = O(n) excluding output.


#include <iostream>
#include <vector>
using namespace std;
void Permut(vector<int> &arr, vector<vector<int>> &ans, int index)
{
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    vector<bool> use(21, 0);
    for (int i = index; i < arr.size(); i++)
    {
        if (use[arr[i] + 10] == 0)
        {
            swap(arr[i], arr[index]);
            Permut(arr, ans, index + 1);
            swap(arr[i], arr[index]);
            use[arr[i]+10]=1;
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 1};
    vector<vector<int>> ans;
    Permut(arr, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}