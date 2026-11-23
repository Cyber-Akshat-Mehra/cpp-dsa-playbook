// Subsequence Problem

// Steps:-

// Suppose the string is ABC.

// 1. Start from index 0.
// 2. For every element, make 2 choices:
//      Take the current element.
//      Don't take the current element.
// 3. Move to the next index recursively.
// 4. When you reach the end of the string, store/print the current subsequence.
// 5. Backtrack and explore the other choice.

//             Recursion tree
//                 ""
//               /    \
//             A        ""
//           /  \      /  \
//         AB    A    B    ""
//        / \   / \  / \   / \
//      ABC AB AC A BC B  C  ""

// Time Complexity	O(n × 2ⁿ)
// Auxiliary Space	O(n)
// If storing all subsequences	O(n × 2ⁿ)

#include<iostream>
#include<vector>
using namespace std;

void subSequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> temp)
{
    if (index==n)
    {
        ans.push_back(temp);
        return;
    }
    
    // Not Include
    subSequence(arr, index+1, n, ans, temp);
    // Include
    temp.push_back(arr[index]);
    subSequence(arr, index+1, n, ans, temp);
}

int main()
{
    int arr[]={1,2,3};
    vector<vector<int>> ans;
    vector<int> temp;
    subSequence(arr,0,3,ans,temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}