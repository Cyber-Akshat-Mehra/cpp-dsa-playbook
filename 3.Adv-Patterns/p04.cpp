//         A
//       A B
//     A B C
//   A B C D
// A B C D E

#include <iostream>
using namespace std;
int main()
{

    int n;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
            cout << "  ";
        for (int k = 1; k <= i; k++)
        {
            char name = 'A' + i - 1;
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}