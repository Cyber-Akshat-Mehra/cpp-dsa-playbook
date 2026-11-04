// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.

#include <iostream>
#include <vector>
using namespace std;

void lpsFind(vector<int> &lps, string s)
{
    int pre = 0, suf = 1;

    while (suf < s.size())
    {
        // match
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++, suf++;
        }

        // not match
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
}

int strStr(string haystack, string needle)
{
    vector<int> lps(needle.size(), 0);
    lpsFind(lps, needle);

    int first = 0, second = 0;

    while (first < haystack.size() && second < needle.size())
    {
        // match
        if (haystack[first] == needle[second])
        {
            first++, second++;
        }

        // not matched
        else
        {
            if (second == 0)
                first++;
            else
                second = lps[second - 1];
        }
    }

    // answer wxist
    if (second == needle.size())
        return first - second;

    return -1;
}

int main()
{
    string haystack = "sadbutsad", needle = "sad";
    cout<<"Find First Occurance at Index : "<<strStr(haystack,needle);
    return 0;
}