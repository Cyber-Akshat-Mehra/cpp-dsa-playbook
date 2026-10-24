// This program transposes a matrix.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int row = matrix.size(), col = matrix[0].size();
        vector<vector<int>> ans(col, vector<int>(row));
    
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                 ans[i][j] = matrix[j][i];
            }
        }   
    
        return ans;
    }

int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    vector<vector<int>> result = transpose(matrix);

    // Print original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Print transposed matrix
    cout << "\nTransposed Matrix:" << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}