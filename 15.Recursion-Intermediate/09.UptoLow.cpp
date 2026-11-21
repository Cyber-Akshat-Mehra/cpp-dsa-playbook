#include <iostream>
using namespace std;
void upToLow(string &str, int index)
{
    if (index == -1)
    {
        return;
    }
    str[index] = str[index] + 32;
    upToLow(str, index - 1);
}
int main()
{
    string s = "AKSHAT";
    upToLow(s, 5);
    cout << s;
    return 0;
}