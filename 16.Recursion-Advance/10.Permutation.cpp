// Permutations Using Recursion + Backtracking

// Steps :-
// 1. Start with an empty temp.
// 2. Maintain a visited array to track which elements are already selected.
// 3. Run a loop through all elements.
// 4. If an element is not visited:
//      Mark it as visited.
//      Add it to temp.
//      Call recursion.

// 5. After recursion returns:
//      Unmark the element.
//      Remove it from temp.
//      This is called backtracking.

// 6. When temp.size() == n:
//      A complete permutation is formed.
//      Store it in ans.
//      Return.

// Number of permutations :- n!
// Time Complexity :- O(n × n!)
// Auxiliary Space :- O(n)
// Output Space :- O(n × n!)

#include <iostream>
#include <vector>
using namespace std;
void Permut(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
{
    if (visited.size() == temp.size())
    {
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < visited.size(); i++)
    {
        if (visited[i] == 0)
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            Permut(arr, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(3, 0);
    Permut(arr, ans, temp, visited);

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