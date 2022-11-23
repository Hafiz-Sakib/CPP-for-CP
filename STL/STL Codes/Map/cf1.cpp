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
    int n;
    cin >> n;

    map<string, bool> vis;

    while (n--)
    {
        string s;
        cin >> s;
        if (vis[s] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";

        vis[s] = 1;
    }

    return 0;
}