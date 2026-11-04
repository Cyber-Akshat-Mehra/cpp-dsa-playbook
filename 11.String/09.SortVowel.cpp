//  Sort Vowels in a String
// Example 1:

// Input: s = "lEetcOde"
// Output: "lEOtcede"
// Explanation: 'E', 'O', and 'e' are the vowels in s; 'l', 't', 'c', and 'd' are all consonants.
// The vowels are sorted according to their ASCII values, and the consonants remain in the same places.

#include <iostream>
#include <vector>
using namespace std;

string sortVowels(string s)
{
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        // Lower case vowels
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }

        // Upper case vowels
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }

    string vowels;
    // Upper
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i])
        {
            vowels += c;
            upper[i]--;
        }
    }

    // Lower
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i])
        {
            vowels += c;
            lower[i]--;
        }
    }

    int first = 0, second = 0;
    while (second < vowels.size())
    {
        if (s[first] == '#')
        {
            s[first] = vowels[second];
            second++;
        }
        first++;
    }

    return s;
}
int main()
{
    string s = "lEetcOde";
    cout<<sortVowels(s);
    return 0;
}