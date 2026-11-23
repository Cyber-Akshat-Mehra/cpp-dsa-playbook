// Permutation Using Swap

//          Steps :-
// 1. Start with index = 0.
// 2. Consider the current position index.
// 3. Loop from index to n-1.
// 4. Swap arr[i] with arr[index] → choose an element.
// 5. Recursively call with index + 1.
// 6. Swap back → backtrack and restore the array.
// 7. When index == n, store the permutation.

//          Pattern
// Choose → Swap → Recursion → Swap Back

//          Complexity
// Number of permutations: n!
// Time: O(n × n!)
// Auxiliary Space: O(n)
// Output Space: O(n × n!)

//          Key Point
// No visited[] and temp[] array is required.
// The swap + swap back technique handles both selection and backtracking.

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

    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[i], arr[index]);
        Permut(arr, ans, index + 1);
        swap(arr[i], arr[index]);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3};
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