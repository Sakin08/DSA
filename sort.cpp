#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v) // Corrected the parameter declaration
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v; // Vector declaration

    v.push_back(10); // v[0]
    v.push_back(2); // v[1]
    v.push_back(31); // v[2]
    v.push_back(44); // v[3]
    v.push_back(455);
    v.push_back(4);
    v.push_back(5);
    v.push_back(47);
    print(v); // Corrected the function call by passing the vector 'v'
    
    cout<<"after sort"<<endl;
    sort(v.begin(),v.end());
    print(v);

    return 0;
}
