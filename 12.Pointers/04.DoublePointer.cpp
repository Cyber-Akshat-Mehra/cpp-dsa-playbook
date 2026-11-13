#include <iostream>
using namespace std;

void fun(int **ptr)
{
    *ptr = *ptr + 1;
}

int main()
{
    int n = 10;
    int *p = &n; // Single Pointer
    // cout<<&n<<endl;
    // cout<<p<<endl;

    int **p2 = &p; // Double Pointer
    // cout<<&p<<endl;
    // cout<<p2<<endl;

    int ***p3 = &p2; // Triple Pointer
    // cout<<&p2<<endl;
    // cout<<p3<<endl;




    // Now Modify value of n with all pointer
    // *p=*p+5; //Single pointer
    // cout<<n<<endl;

    // **p2=**p2+5;  //Double Pointer
    // cout<<n<<endl;

    // ***p3=***p3+5; //Triple Pointer
    // cout<<n<<endl;





    // Modifying Pointer with the help of function
    cout<<p<<endl;
    fun(p2);
    cout<<p<<endl;
    return 0;
}