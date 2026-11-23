// Rat in a Maze

//              Steps
// 1. Start from (0,0).
// 2. Check the 4 directions: Down, Left, Right, Up.
// 3. For each move, check:
//      Inside the matrix
//      Cell is open (1)
//      Cell is not already visited
// 4. Mark the current cell visited.
// 5. Move to the valid cell and recurse.
// 6. If destination (n-1,n-1) is reached, store the path.
// 7. Backtrack: remove the last direction and unmark the cell.
// 8. Continue until all possible paths are explored.


//                      Pattern
// Choose Direction → Check Valid → Move → Recurse → Backtrack


// Time Complexity	O(3ⁿ²)    - worst-case upper bound
// Auxiliary Space	O(n²)
// Technique	Recursion + Backtracking




#include <iostream>
#include <vector>
using namespace std;

int row[4] = {1, 0, 0, -1};
int col[4] = {0, -1, 1, 0};
string dir = "DLRU";

bool valid(int i, int j, int n)
{
    return i >= 0 && j >= 0 && i < n && j < n;
}

void total(vector<vector<int>> &matrix, int i, int j, int n, string &path, vector<string> &ans, vector<vector<bool>> &visited)
{
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }
    visited[i][j] = 1;
    for (int k = 0; k < 4; k++)
    {
        if (valid(i + row[k], j + col[k], n) && matrix[i + row[k]][j + col[k]] && !visited[i + row[k]][j + col[k]])
        {
            path.push_back(dir[k]);
            total(matrix, i + row[k], j + col[k], n, path, ans, visited);
            path.pop_back();
        }
    }
    visited[i][j] = 0;
}

int main()
{
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    int n = maze.size();
    vector<vector<bool>> visited(n, vector<bool>(n, 0));
    vector<string> ans;
    string path;

    if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }

    total(maze, 0, 0, n, path, ans, visited);
    for (int i = 0; i < ans.size(); i++)
    {
         cout << ans[i] << " ";
    }
    return 0;
}