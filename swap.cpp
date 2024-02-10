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
    vector<int> v1,v2; // Vector declaration

    v1.push_back(1); // v[0]
    v1.push_back(2); // v[1]
    v1.push_back(3); // v[2]
    v1.push_back(4); // v[3]

    print(v1);
    v2.push_back(10); // v[0]
    v2.push_back(20); // v[1]
    v2.push_back(30); // v[2]
    v2.push_back(40); // v[3]
    print(v2);


    swap(v1,v2);
    cout<<"after swap"<<endl;
    print(v1);
    print(v2);
    return 0;


}
