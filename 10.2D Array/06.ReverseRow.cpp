// reverse each row

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 5, 7, 6, 2};
    int row = 4, col = 4;

    cout<<"Before Reverse"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1;
        while (start <= end)
        {
            swap(arr[i][start], arr[i][end]);
            start++, end--;
        }
    }

    cout<<endl<<"After Reverse"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}