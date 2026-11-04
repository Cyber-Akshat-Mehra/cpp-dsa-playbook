// Given a string consisting of lowercase letters, arrange all its letters in ascending order. 

// Examples:

// Input: s = "edcab"
// Output: "abcde"
// Explanation: characters are in ascending
// order in "abcde".

#include <iostream>
#include <vector>
using namespace std;

string sortString(string &s)
{
    // code here
    vector<int> alpha(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        alpha[s[i] - 'a']++;
    }

    int idx = 0;
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (alpha[i])
        {
            s[idx] = c;
            idx++;
            alpha[i]--;
        }
    }

    return s;
}

int main()
{
    string s="edcab";
    cout<<sortString(s);
    return 0;
}