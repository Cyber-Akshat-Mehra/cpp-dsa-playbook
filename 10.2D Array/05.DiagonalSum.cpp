// Print the Sum of Diagonal element

#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 5, 7, 6, 2};
    int second = 0, first = 0;

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
        first += arr[i][i];

    int i= 0, j = 4 - 1;
    while (j >= 0)
    {
        second += arr[i][j];
        i++, j--;
    }

    cout << endl
         << "Sum of Right Diagonal : " << first << endl;
    cout << "Sum of Left Diagonal : " << second;
    return 0;
}