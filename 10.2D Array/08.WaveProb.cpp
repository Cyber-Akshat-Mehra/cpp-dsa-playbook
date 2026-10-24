// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// output 1 5 9 13 14 10 6 23 7 11 15 16 12 8 4

#include <iostream>
using namespace std;
int main()
{
    const int row = 4, col = 4;
    int arr[row][col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
                cout << arr[i][j]<<" ";
        }
        else
        {
            for (int i = row-1; i >= 0 ; i--)
                cout << arr[i][j]<<" ";
        }
    }

    return 0;
}