//         1 
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

#include <iostream>
using namespace std;
int main()
{

    int n;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
            cout << "  ";
        for (int k = i; k >=1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}