// This program counts how many times each number from 1 to n appears in a given array.

#include <iostream>
#include <vector>
using namespace std;

vector<int> frequencyCount(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> freq(n, 0);

    for (int num : arr)
    {
        if (num >= 1 && num <= n)
            freq[num - 1]++;
    }

    return freq;
}

int main()
{
    vector<int> arr = {3, 1, 2, 5, 3};
    vector<int> result = frequencyCount(arr);

    cout << "Frequencies of numbers 1 to " << result.size() << ":\n";
    for (int i = 0; i < result.size(); i++)
    {
        cout << "Number " << (i + 1) << ": " << result[i] << endl;
    }

    return 0;
}
