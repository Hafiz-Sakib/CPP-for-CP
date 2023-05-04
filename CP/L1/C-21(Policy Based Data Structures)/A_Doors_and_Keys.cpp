// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

const double eps = 1e-12;
const int mx = 1e8 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

string s;

int pos(char c)
{
    return s.find(c);
}

void Boom()
{
    cin >> s;
    (pos('r') < pos('R')) && pos('g') < pos('G') && pos('b') < pos('B') ? yes : no;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
