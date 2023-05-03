// https://codeforces.com/contest/474/problem/A

// Bismillahir Rahmanir Rahim
/*
string author;
author = Hafiz_Sakib;
*/
#include <bits/stdc++.h>
using namespace std;

#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    char type, q;
    cin >> type;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int x = 0, y = 0, z = 0;
    while (cin >> q)
    {
        if (type == 'R')
        {
            cout << s[s.find(q) - 1];
        }
        else
        {
            cout << s[s.find(q) + 1];
        }
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}