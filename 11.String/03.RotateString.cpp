// String Rotated by 2 Places

// Given two strings s1 and s2. Return true if the string s2 can be obtained by rotating (in any direction) string s1 by exactly 2 places, otherwise, false.

// Note: Both rotations should be performed in same direction chosen initially.

// Examples:

// Input: s1 = "amazon", s2 = "azonam"
// Output: true
// Explanation: "amazon" can be rotated anti-clockwise by two places, which will make it as "azonam".

#include <iostream>
using namespace std;

void rotateclockwise(string &s)
{
    char c = s[0];
    int index = 1;

    while (index < s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[s.size() - 1] = c;
}

void rotateanticlockwise(string &s)
{
    char c = s[s.size() - 1];
    int index = s.size() - 2;

    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = c;
}

bool isRotated(string &s1, string &s2)
{
    if (s1.size() != s2.size())
        return 0;

    string clockwise, anticlockwise;
    clockwise = s1;

    rotateclockwise(clockwise);
    rotateclockwise(clockwise);

    if (clockwise == s2)
        return 1;

    anticlockwise = s1;
    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);

    if (anticlockwise == s2)
        return 1;

    return 0;
}

int main()
{
    string s1="amazon", s2="azonam";
    int ans=isRotated(s1,s2);

    if(ans)
        cout<<"True";
    else
        cout<<"False";

    return 0;
}
