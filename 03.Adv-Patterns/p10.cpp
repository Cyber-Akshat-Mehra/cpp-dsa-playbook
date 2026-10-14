// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << '*' << " ";
        }

        for (int j = 1; j <= (2 * 4 - 2 * i); j++)
            cout << "  ";

        for (int l = 1; l <= i; l++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }

    for (int i = 4; i >= 1; i--)
    {

        for (int k = 1; k <= i-1; k++)
        {
            cout << "* ";
        }

        for (int j = 1; j <= 10-2*i; j++)
            cout << "  ";

        for (int l = 1; l <= i-1; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}