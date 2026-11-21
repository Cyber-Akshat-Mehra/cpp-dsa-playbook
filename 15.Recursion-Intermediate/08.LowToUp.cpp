#include <iostream>
using namespace std;
void LowToUp(string &str, int index)
{
    if (index == -1)
    {
        return;
    }
    str[index] = str[index] - 32;
    LowToUp(str, index - 1);
}
int main()
{
    string s = "akshat";
    LowToUp(s, 5);
    cout << s;
    return 0;
}