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
    vector<int> v = {2, 8, 4, 1};
    auto c = v;

    // sort(v.begin(), v.end());

    //  sort(v.rbegin(), v.rend());

    for (auto u : v)
    {
        cout << u << " ";
    }
    cout << endl;

    for (auto u : c)
    {
        cout << u << " ";
    }
    cout << endl;
    return 0;
}