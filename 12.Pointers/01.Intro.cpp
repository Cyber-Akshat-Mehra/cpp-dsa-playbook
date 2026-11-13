#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    // cout<<ptr<<endl; // This print the address
    // cout<<*ptr<<endl; //This print the value store by pointer a particular address
    // cout<<sizeof(ptr);//This print the size of pointer
    // *Note :- A pointer has a constant size because it stores only a memory address, not the actual data it points to.

    int b=20;
    ptr=&b;
    cout<<*ptr;
    return 0;
}
