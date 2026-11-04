// Search Pattern
// Given two strings, a text string txt and a pattern string pat, both consisting of lowercase English alphabets. Return the starting indices (0-based) of all the occurrences of the pattern string pat in the text string txt.

// Note: Return an empty list in case of no occurrences of pattern.

// Examples:

// Input: txt = "geeksforgeeks", pat = "geek"
// Output: [0, 8]
// Explanation: The string "geek" occurs twice in txt, one starts at index 0 and the other at index 8.

#include <iostream>
#include <vector>
using namespace std;

void lpsFind(vector<int> &lps, string s)
{
    int pre = 0, suf = 1;

    while (suf < s.size())
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
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

vector<int> search(string pat, string txt)
{

    vector<int> lps(pat.size(), 0);
    lpsFind(lps, pat);

    vector<int> ans;

    int first = 0, second = 0;

    while (first < txt.size())
    {

        if (txt[first] == pat[second])
        {
            first++;
            second++;
        }
        else
        {
            if (second == 0)
                first++;
            else
                second = lps[second - 1];
        }

        // Pattern found
        if (second == pat.size())
        {
            ans.push_back(first - second);

            // Continue searching
            second = lps[second - 1];
        }
    }

    return ans;
}

int main()
{
    string txt = "geeksforgeeks", pat = "geek";
    vector<int> ans=search(pat,txt);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<", ";
    }
    return 0;
}