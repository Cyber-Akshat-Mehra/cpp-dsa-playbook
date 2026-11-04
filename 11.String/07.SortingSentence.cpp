// Sorting the Sentence
// Example 1:

// Input: s = "is2 sentence4 This1 a3"
// Output: "This is a sentence"
// Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.

#include <iostream>
#include <vector>
using namespace std;

string sortSentence(string s)
{
    vector<string> ans(10);

    string temp = "";
    int idx = 0;
    int count = 0;

    while (idx < s.size())
    {
        if (s[idx] == ' ')
        {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
            idx++;
        }
        else
        {
            temp += s[idx];
            idx++;
        }
    }

    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    count++;
    temp.clear();

    for (int i = 1; i <= count; i++)
    {
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();

    return temp;
}

int main()
{
    string s="is2 sentence4 This1 a3";
    string ans=sortSentence(s);
    cout<<ans;
    return 0;
}