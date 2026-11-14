#include <iostream>
using namespace std;
int main()
{
    // Memory Allocation in heap
    int *ptr=new int;
    *ptr=5;
    cout<<*ptr<<endl;


    float *ptr2 = new float;
    *ptr2=3.6;
    cout<<*ptr2<<endl;

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int *p=new int[n];
    
    // Value Enter
    for (int i = 0; i < n; i++)
        p[i]=i+1;
    

    // Value Print 
    for (int i = 0; i < n; i++)
        cout<<p[i]<<" ";
    
    delete ptr;
    delete ptr2;
    delete p;

    return 0;
}
