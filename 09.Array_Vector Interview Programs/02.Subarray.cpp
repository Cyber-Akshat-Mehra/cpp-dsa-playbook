/*
This C++ program prints all subarrays of a given array.
Example:
If the user enters:

size = 4
elements = 1 2 3 4
The program prints:

1
1 2
1 2 3
1 2 3 4
2
2 3
2 3 4
3
3 4
4
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nAll subarrays:\n";

    for (int start = 0; start < n; start++)
    {
        vector<int> temp;

        for (int end = start; end < n; end++)
        {
            temp.push_back(arr[end]);

            for (int x = 0; x < temp.size(); x++)
            {
                cout << temp[x] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}