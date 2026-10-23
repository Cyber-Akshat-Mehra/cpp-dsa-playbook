//  Vector Basics

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Create vector
    vector<int> v;
    vector<int> v1(5, 1);

    // //insert
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);


    // //size and capacity
    // cout<<"Size "<<v.size()<<endl;
    // cout<<"Capacity "<<v.capacity();

    // //update value
    // v[1]=5;

    // //delete element
    // v.pop_back();
    // v.erase(v.begin()+1);
    // v.clear(); //remove all element

    // //insert at particular index
    // v.insert(v.begin()+1,55);

    // //traversing and inserting through loop
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i];
    // }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin>>v[i];
    // }

    // //print front and last element
    // cout<<v.front();
    // cout<<v.back();
    // cout<<v.size()-1;

    // //copy one vector to another
    // vector<int> v3;
    // v3=v;

    // //another way to print
    // for(auto i: v){
    //     cout<<i;
    // }

    // Sorting in increasing order
    sort(v.begin(), v.end());
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;


    // sorting in decreasing order
    // sort(v.begin(), v.end(), greater<int>());
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;


    //Binary search
    // cout<<binary_search(v.begin(),v.end(),5);


    //Find with index
    cout<<find(v.begin(),v.end(),5)-v.begin();



    return 0;
}
