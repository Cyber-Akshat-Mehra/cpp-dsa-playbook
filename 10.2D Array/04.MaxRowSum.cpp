// Print the index of the row with maximum sum

#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int sum = INT_MIN, index = -1;

    for (int i = 0; i < 3; i++)
    {
        int total = 0;
        for (int j = 0; j < 4; j++)
        {
            total += arr[i][j];
            if (total > sum)
            {
                sum = total;
                index = i;
            }
        }
    }
    cout<<"Row with Maximum Sum is : "<<index;
    return 0;
}