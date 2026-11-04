// Min Chars to Add for Palindrome

// Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.

// Note: A palindrome string is a sequence of characters that reads the same forward and backward.

// Examples:

// Input: s = "abc"
// Output: 2
// Explanation: Add 'b' and 'c' at front of the above string to make it palindrome: "cbabc"

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int minChar(string &str)
{

    string rev = str;
    reverse(rev.begin(), rev.end());
    int size = str.size();
    str += '$';
    str += rev;

    // longest prefix suffix
    int n = str.size();
    vector<int> lps(n, 0);
    int pre = 0, suf = 1;

    while (suf < str.size())
    {
        if (str[pre] == str[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }

        else
        {

            if (pre == 0)
                suf++;
            else
                pre = lps[pre - 1];
        }
    }

    return size - lps[n - 1];
}

int main()
{
    string s = "aacecaaaa";
    cout<<minChar(s);
    return 0;
}