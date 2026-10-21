#include <iostream>
using namespace std;
int main() {

    int year;
    cout<< "Enter the year : ";
    cin>>year;

    if(year % 400 == 0  ){
        cout<<"Leap Year";
    }else if (year % 4 == 0 && year % 100 != 0){
        cout<<"Leap Year";
    }else {
        cout<<"Not A Leap Year";
    }

    return 0;
}