#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)  // Corrected the parameter declaration
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

    v.push_back(1); // v[0]
    v.push_back(2); // v[1]
    v.push_back(3); // v[2]
    v.push_back(4); // v[3]

    print(v); // Corrected the function call by passing the vector 'v'
    cout<<v.size()<<endl;

    // v.clear();
    // cout<<v.size()<<endl;

    //erase function

    v.erase(v.begin()+2,v.end());
    print(v);

    //insert function

    v.insert(v.begin(),5,100);
    print(v);
 v.insert(v.begin()+1,3,20);
 print(v);
    return 0;


}
