// This program prints the elements of a 2D matrix in spiral order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size(), col = matrix[0].size();
    int top = 0, bottom = row - 1, left = 0, right = col - 1;

    while (top <= bottom && left <= right)
    {
        // top
        for (int i = left; i <= right; i++)
            ans.push_back(matrix[top][i]);
        top++;

        // right
        for (int i = top; i <= bottom; i++)
            ans.push_back(matrix[i][right]);
        right--;

        // bottom
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                ans.push_back(matrix[bottom][i]);
            bottom--;
        }

        // left
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);
            left++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result = spiralOrder(matrix);

    // Print the result
    for (int val : result)
        cout << val << " ";

    return 0;
}