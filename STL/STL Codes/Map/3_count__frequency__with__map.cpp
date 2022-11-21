#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    vector<long long int> v = {1564874541897, 1564874541897, 1564874541897, 658498798, 89787, -1, -2, -59, -59, -59, -59, -59, -59, -59, -59, -59, -59};
    map<long long int, long long int> m;

    /*
     for (int i = 0; i < v.size(); i++)
        {
            m[v[i]]++;
        }

        cout << m[1564874541897] << endl;

    */

    for (auto u : v)
    {
        m[u]++;
    }

    cout << m[-59] << endl;

    for (auto u : v)
        /* {
            if (m[u] > 0)
            {
                cout << u << " is occured " << m[u] << " "
                     << "times" << endl;
            }
        } */

        return 0;
}