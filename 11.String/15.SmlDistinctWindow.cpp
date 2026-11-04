// Smallest distinct window
// Given a string str, your task is to find the length of the smallest window that contains all the characters of the given string at least once.

// Example:

// Input: str = "aabcbcdbca"
// Output: 4
// Explanation: Sub-String "dbca" has the smallest length that contains all the characters of str.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findSubString(string &str)
{
    // code here
    vector<int> count(256, 0);
    int first = 0, second = 0, len = str.size(), diff = 0;

    // count unique character
    while (first < str.size())
    {
        if (count[str[first]] == 0)
            diff++;

        count[str[first]]++;
        first++;
    }

    for (int i = 0; i < 256; i++)
        count[i] = 0;

    first = 0;

    while (second < str.size())
    {
        // Until diff exists
        while (diff && second < str.size())
        {
            if (count[str[second]] == 0)
                diff--;

            count[str[second]]++;
            second++;
        }

        len = min(len, second - first);

        // until diff is equal to 1
        while (diff != 1)
        {
            len = min(len, second - first);
            count[str[first]]--;

            if (count[str[first]] == 0)
                diff++;

            first++;
        }
    }

    return len;
}
int main()
{
    string str = "aabcbcdbca";
    cout << findSubString(str);
    return 0;
}