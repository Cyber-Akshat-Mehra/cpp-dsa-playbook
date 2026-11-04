// A pangram is a sentence where every letter of the English alphabet appears at least once.

// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

// Example 1:

// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.

#include <iostream>
#include <vector>
using namespace std;
bool checkIfPangram(string sentence)
{

    vector<bool> alpha(26, 0);

    for (int i = 0; i < sentence.size(); i++)
    {
        alpha[sentence[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
            return 0;
    }

    return 1;
}
int main()
{
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    int ans = checkIfPangram(sentence);

    if (ans)
        cout << "True";
    else
        cout << "False";

    return 0;
}