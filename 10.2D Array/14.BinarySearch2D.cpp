// This program performs binary search on a 2D matrix.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size();
    int start = 0, end = n * m - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int row_index = mid / m;
        int col_index = mid % m;

        if (matrix[row_index][col_index] == target)
            return true;
        else if (matrix[row_index][col_index] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return false;
}
int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=3;
    cout<< searchMatrix(matrix,target);
}