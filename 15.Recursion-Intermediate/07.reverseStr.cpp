#include <iostream>
using namespace std;
void StrRev(string &str, int st, int ed)
{
    if (st >= ed)
    {
        return;
    }
    char c = str[st];
    str[st] = str[ed];
    str[ed] = c;

    StrRev(str,st+1,ed-1);
}
int main()
{
    string s="akshat";
    StrRev(s,0,5);
    cout<<s;
    return 0;
}