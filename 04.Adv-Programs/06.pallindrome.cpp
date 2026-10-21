#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;

    if (n < 0)
    {
        cout << "Not A Pallindrome";
        return 0;
    }

    int ans = 0, rem, num = n;
    while (num) 
    {
        rem = num % 10; 
        num /= 10;      

        ans = ans * 10 + rem; 
    }

    if (ans == n)
    {
        cout << "Pallindrome Number";
    }
    else
    {
        cout << "Not A Pallindrome";
    }
    return 0;
}
