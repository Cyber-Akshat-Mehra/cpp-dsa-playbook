// This program adds two 2D matrices of size 3x4 and prints the result.
#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9, 11, 13};
    int ans[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            ans[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<< ans[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}