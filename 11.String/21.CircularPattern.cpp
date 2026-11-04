//Circular PAttern Problem
//ex string :-  cdeabroab and pattern :- abcde now the pattern exist cdeabroabcdeabroab from 7-11

#include <iostream>
#include <vector>
using namespace std;

void lpsFind(vector<int> &lps, string pat)
{
    int pre = 0, suf = 1;

    while (suf < pat.size())
    {
        if (pat[pre] == pat[suf])
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
}

bool circularPatternMatch(string txt, string pat)
{
    string circularTxt = txt + txt;

    vector<int> lps(pat.size(), 0);
    lpsFind(lps, pat);

    int i = 0, j = 0;

    while (i < circularTxt.size())
    {
        if (circularTxt[i] == pat[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j == 0)
                i++;
            else
                j = lps[j - 1];
        }

        if (j == pat.size())
            return true;
    }

    return false;
}

int main()
{
    string txt = "cdeabroab";
    string pat = "abcde";

    if (circularPatternMatch(txt, pat))
        cout << "Pattern Exists";
    else
        cout << "Pattern Not Found";

    return 0;
}