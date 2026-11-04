// Repeated String Match
// Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it.
// If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

// Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

// Example 1:

// Input: a = "abcd", b = "cdabcdab"
// Output: 3
// Explanation: We return 3 because by repeating a three times "abcdabcdabcd", b is a substring of it.

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

int KMP_MATCH(string haystack, string needle)
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
        return 1;

    return 0;
}

int repeatedStringMatch(string a, string b)
{
    if (a == b)
        return 1;

    int repeat = 1;
    string temp = a;

    while (temp.size() < b.size())
    {
        temp += a;
        repeat++;
    }

    // KMP pattern search
    if (KMP_MATCH(temp, b) == 1)
        return repeat;

    // temp+=a, KMP pattern search
    if (KMP_MATCH(temp + a, b) == 1)
        return repeat + 1;

    return -1;
}

int main()
{
    string a = "abcd", b = "cdabcdab";
    cout<<"By Repeating "<<repeatedStringMatch(a,b)<<" Times "<<a<<" is a Substring of "<<b;
    return 0;
}