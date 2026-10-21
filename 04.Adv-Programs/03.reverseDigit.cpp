// Ex-234 -> 432

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    int ans = 0, rem;
    while (num) //432 -> 43 -> 4
    {
        rem = num % 10; //2 -> 3 -> 4
        num /= 10; //43 -> 4 -> 0

        ans = ans * 10 + rem; //2 -> 23 -> 234
    }
    cout<<"Result : "<<ans;

    return 0;
}