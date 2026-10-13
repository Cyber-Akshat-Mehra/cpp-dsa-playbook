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

    for (int i = 4; i >= 1; i--)
    {
    
        for (int k = 1; k <= i; k++)
        {
            cout <<"* ";
        }

        for (int j = 1; j<=8-2*i; j++)
            cout << "  ";

        for (int l = 1; l <= i; l++)
        {
            cout <<"* ";
        }
        cout << endl;

    }

    for (int i = 1; i <= 4; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << '*' << " ";
        }

        for (int j = 1; j <=(2*4-2*i); j++)
            cout << "  ";

        for (int l = 1; l <= i; l++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }

    return 0;
}