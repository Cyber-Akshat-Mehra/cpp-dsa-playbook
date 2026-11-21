#include <iostream>
using namespace std;
bool checkPallindrome(string str, int st, int ed)
{
    if (st >= ed)
    {
        return 1;
    }

    if (str[st] != str[ed])
        return 0;

    return checkPallindrome(str, st + 1, ed - 1);
}
int main()
{
    string s="naman";
    cout<< checkPallindrome(s,0,4);
    return 0;
}