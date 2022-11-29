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
    set<int> s = {2, 6, 8, 1, 2, 3, 5, 4, 7, 8, 9, 8};

    // 1 2 3 4 5 6 7 8 9

    auto a = s.lower_bound(13);
    cout << *a;

    return 0;
}