#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the no. : ";
    cin>>n;

    switch (n)
    {
    case 1:
    cout<<"Akshat";
    break;

    case 2:
    cout<<"Mehra";
    break;
    
    default:
    cout<<"Unknown";
    break;
    }
    return 0;
}