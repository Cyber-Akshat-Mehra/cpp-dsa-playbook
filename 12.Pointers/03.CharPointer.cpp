#include <iostream>
using namespace std;


// pass by pointer
void swapping(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<p1<<endl;
    cout<<p2<<endl;
}

// pass by refrence`
void swapping2(int &p1,int &p2)
{
    int temp=p1;
    p1=p2;
    p2=temp;
}



int main()
{
    // char arr[5] = "1234";
    // char *ptr = arr;
    // cout << static_cast<void *>(arr) << endl;
    // cout << (void *)ptr << endl;

    // char name = 'a';
    // char *ptr1 = &name;
    // cout << (void *)&name << endl;
    // cout << (void *)ptr;

    

    //Pass By Pointer 
    // int first=10,second=20;
    // cout<<&first<<endl;
    // cout<<&second<<endl;
    // swapping(&first,&second);
    // cout<<first<<" "<<second; 




    // Pass by refrence 
    int num=10, num2=20;
    int &temp=num;  //num and temp are same now due to refrence operator 
    cout<<&num<<endl;
    cout<<&temp<<endl;
    // cout<<num<<endl;
    // cout<<temp;
    swapping2(num,num2);
    cout<<num<<" "<<num2;




    return 0;
}