// A defanged IP address replaces every period "." with "[.]".

 

// Example 1:

// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:

// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"


#include <iostream>
using namespace std;

string defangIPaddr(string address)
{
    string ans;
    int index = 0;

    while (index < address.size())
    {
        if (address[index] == '.')
            ans += "[.]";
        else
            ans += address[index];

        index++;
    }

    return ans;
}

int main()
{
    string address = "1.1.1.1";
    string result = defangIPaddr(address);
    cout << "Defanged IP: " << result << endl;
    return 0;
}