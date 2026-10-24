// This program creates a 2D vector matrix and takes input from the user, then prints it.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter Row and col : ";
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    // cout << "No of rows : " << matrix.size() << endl;
    // cout << "No of col : " << matrix[0].size();

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout<<endl;    
    }
    return 0;
}