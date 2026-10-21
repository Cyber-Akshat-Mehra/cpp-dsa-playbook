#include <iostream>
using namespace std;

char converter(char n){
    char ans=n-32;
    return ans;
}

int main(){
    char name;
    cout<<"Enter character : ";
    cin>>name;
    cout<<converter(name);
    return 0;
}