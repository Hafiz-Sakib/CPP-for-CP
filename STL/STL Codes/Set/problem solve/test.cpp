/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    int q, a, y;
    string x;
    cin >> q;
    map<string, int> mp;
    while (q--)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> x >> y;

            if (auto itr = mp.find(x) != mp.end())
            {
                mp[x] += y;
            }
            else
            {
                mp.insert(make_pair(x, y));
            }
        }
        else
        {
            if (a == 2)
            {
                cin >> x;
                mp.erase(x);
            }
            else
            {
                cin >> x;
                cout << mp[x] << endl;
            }
        }
        return 0;
    }
}