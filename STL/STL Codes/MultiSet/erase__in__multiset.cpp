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

    multiset<int> s = {8, 2, 3, 6, 4, 8, 9, 1, 2};

    for (auto u : s)
    {
        cout << u << " ";
    }

    cout << endl;
    /*

    Output :
    1 2 2 3 4 6 8 8 9

    */

    s.erase(2);
    // erase function e jei number pass kora hobe sei number er sob occurance delete hoye jabe.

    for (auto u : s)
    {
        cout << u << " ";
    }
    /*

    Output :
    1 3 4 6 8 8 9

    */

    return 0;
}