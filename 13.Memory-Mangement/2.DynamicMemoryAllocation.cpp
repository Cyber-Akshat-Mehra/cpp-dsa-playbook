// Dynamic Memory Allocation

#include <iostream>
using namespace std;
int main()
{
    // int n, m;
    // cout << "Enter Rows and Column : ";
    // cin >> n >> m;

    // int **ptr = new int *[n];
    // // Create 2D Array
    // for (int i = 0; i < n; i++)
    // {
    //     ptr[i] = new int[m];
    // }

    // // Enter the element
    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < m; j++)
    //         cin >> ptr[i][j];

    // // print the element
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << ptr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // Release The Memory
    // for(int i=0;i<n;i++)
    // {
    //     delete[] ptr[i];
    // }
    // delete[] ptr;

    // 3D array
    int l, b, h;
    cin >> l >> b >> h;
    int ***ptr = new int **[l];

    for (int i = 0; i < l; i++)
    {
        ptr[i] = new int *[b];
        for (int j = 0; j < b; j++)
        {
            ptr[i][j] = new int[h];
        }
    }

    for (int i = 0; i < l; i++)
        for (int j = 0; j < b; j++)
            for (int k = 0; k < h; k++)
                ptr[i][j][k] = i + j + k;


    for (int i = 0; i < l; i++)
        for (int j = 0; j < b; j++)
            for (int k = 0; k < h; k++)
                cout << ptr[i][j][k]<<" ";




    // Deallocating the memory of 3D array 
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            delete[] ptr[i][j];
        }
    }

    for (int i = 0; i < l; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}