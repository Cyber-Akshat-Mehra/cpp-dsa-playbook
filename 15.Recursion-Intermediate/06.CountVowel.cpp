#include <iostream>
using namespace std;
int countVow(string str, int index)
{
    if (index == -1)
    {
        return 0;
    }

    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    {
        return 1 + countVow(str, index - 1);
    }
    else
    {
        return countVow(str, index - 1);
    }
}
int main()
{
    string str="akshat";
    cout<<countVow(str,5);
    return 0;
}