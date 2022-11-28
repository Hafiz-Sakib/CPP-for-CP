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

    // everything of multiset is like set but multiset isn't UNIQUE & it's the main difference

    multiset<int> s;
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    for (auto u : s)
    {
        cout << u << " ";
    }
    return 0;
}