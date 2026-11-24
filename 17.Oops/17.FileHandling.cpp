// File Handling in C++
#include <iostream>
#include<algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
    // To open the file
    // ofstream fout;
    // fout.open("17.TestFiles.txt"); // create the file if not exist and open it.
    // fout << "Hello this is 5Hat "; // Write in the file
    // fout.close();
    // // To open file for reading
    // ifstream fin;
    // fin.open("17.TestFiles.txt");
    // char c=fin.get();
    // while (! fin.eof())
    // {
    //     cout<<c;
    //     c=fin.get();
    // }
    // fin.close();
    // return 0;

    // Example 2
    // vector<int> arr(5);
    // cout << "Enter the Number :- ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // ofstream fout;
    // fout.open("17.TestFiles2.txt");
    // fout<<"Original Data \n";
    // for (int i = 0; i < 5; i++)
    // {
    //     fout<<arr[i]<<" ";
    // }
    // fout<<"\nSorted Data \n";
    // sort(arr.begin(),arr.end());
    // for (int i = 0; i < 5; i++)
    // {
    //     fout<<arr[i]<<" ";
    // }
    // fout.close();

    // Example 3
    ofstream fout;
    fout.open("17.TestFiles.txt");
    fout<<"Hello World \n";
    fout<<"This is HAt \n";
    fout<<"Lets Begin...\n";
    fout.close();
    ifstream fin;
    fin.open("17.TestFiles.txt");
    string line;
    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
    
}