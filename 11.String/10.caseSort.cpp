#include <iostream>
#include<algorithm>
using namespace std;

string caseSort(string &s)
{

    string upper, lower;

    // Separate uppercase and lowercase letters
    for (char ch : s)
    {
        if (isupper(ch))
            upper += ch;
        else
            lower += ch;
    }

    // Sort separately
    sort(upper.begin(), upper.end());
    sort(lower.begin(), lower.end());

    int i = 0, j = 0;

    // Put back according to original case positions
    for (int k = 0; k < s.size(); k++)
    {
        if (isupper(s[k]))
            s[k] = upper[i++];
        else
            s[k] = lower[j++];
    }

    return s;
}

int main()
{
    string s = "GEekS";
    cout<<caseSort(s);
    return 0;
}