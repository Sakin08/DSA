#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int c1, c2, c3 = 0;
    vector<int> v(t);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            c1++;
        if (v[i] == 2)
            c2++;
        if (v[i] == 3)
            c3++;
    }

    if (c1 == c2 == c3)
    {   
        for (int i = 0; i < v.size(); i++)
        {
        }
    }
    else
    cout<<0

    return 0;
}