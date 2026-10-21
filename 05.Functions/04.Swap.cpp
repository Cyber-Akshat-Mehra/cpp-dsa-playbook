#include <iostream>
using namespace std;
void swap(int &a , int &b){
    int c=a;
    a=b;
    b=c;
}

int main() {
    int a , b;
    cout<<"Enter the value of A and B : ";
    cin>>a>>b;
    cout<<"Before A= "<<a<<"  b= "<<b<<endl;
    swap(a,b);
    cout<<"After A= "<<a<<"  b= "<<b;
    return 0;
}