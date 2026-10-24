// Given a strictly sorted 2D matrix mat[][] of size n x m and a number x. Find whether the number x is present in the matrix or not.
// Note: In a strictly sorted matrix, each row is sorted in strictly increasing order, and the first element of the ith row (i!=0) is greater than the last element of the (i-1)th row.

// Examples:

// Input: mat[][] = [[1, 5, 9], [14, 20, 21], [30, 34, 43]], x = 14
// Output: true
// Explanation: 14 is present in the matrix, so output is true.
// Input: mat[][] = [[1, 5, 9, 11], [14, 20, 21, 26], [30, 34, 43, 50]], x = 42
// Output: false
// Explanation: 42 is not present in the matrix.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int x)
{

    int n = matrix.size(), m = matrix[0].size();
    int row = 0, col = m - 1;

    while (row < n && col >= 0)
    {
        if (matrix[row][col] == x)
            return 1;
        else if (matrix[row][col] < x)
            row++;
        else
            col--;
    }

    return 0;
}
int main()
{
    vector<vector<int>> matrix = {{1, 5, 9}, {14, 20, 21}, {30, 34, 43}};
    int target = 14;
    cout << searchMatrix(matrix, target);
}