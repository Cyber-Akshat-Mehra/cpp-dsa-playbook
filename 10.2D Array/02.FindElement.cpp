/* This program searches for a target value in a 2D integer array and tells whether it is present. */

#include <iostream>
using namespace std;

bool findEle(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
                return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}, x = 7;
    if (findEle(arr, x, 3, 4))
        cout << "Yes Present";
    else
        cout << "Not Present";

    return 0;
}