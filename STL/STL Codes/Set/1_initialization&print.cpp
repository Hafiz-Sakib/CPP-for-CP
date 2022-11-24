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

    set<int> s = {1, 2, 5, 6, 9, -8, 78, 2, 10};

    cout << s.size() << endl;

    for (auto u : s)
    {
        cout << u << " ";
    }

    cout << endl;

    return 0;
}