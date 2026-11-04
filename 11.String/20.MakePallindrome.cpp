// Make the Palindrome if the string is not a Palindrome
//  Input : ABC
//  Longest palindromic prefix = "A"
//  Remaining suffix = "BC"
//  Reverse of suffix = "CB"

// Answer = "CB"
// Palindrome = "CBABC"

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string minCharToAdd(string str)
{

    string rev = str;
    reverse(rev.begin(), rev.end());

    string temp = str + '$' + rev;

    int n = temp.size();
    vector<int> lps(n, 0);

    int pre = 0, suf = 1;

    while (suf < n)
    {
        if (temp[pre] == temp[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
                suf++;
            else
                pre = lps[pre - 1];
        }
    }

    int longestPrefixPalindrome = lps[n - 1];

    string ans = str.substr(longestPrefixPalindrome);
    reverse(ans.begin(), ans.end());

    return ans + str;
}
int main()
{
    string s="ABCD";
    cout<<"Resulted Palindrome : "<<minCharToAdd(s);
    return 0;
}