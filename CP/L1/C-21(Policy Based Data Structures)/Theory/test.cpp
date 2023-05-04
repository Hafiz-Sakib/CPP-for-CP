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

void Boom()
{
    string s;
    cin >> s;
    int ok = 1, r = 0, g = 0, b = 0;
    for (auto c : s)
    {
        if (c == 'r')
        {
            r = 1;
        }
        else if (c == 'b')
        {
            b = 1;
        }
        else if (c == 'g')
        {
            g = 1;
        }

        if (c == 'R' && r == 0)
        {
            ok = 0;
            break;
        }
        else if (c == 'B' && b == 0)
        {
            ok = 0;
            break;
        }
        else if (c == 'G' && g == 0)
        {
            ok = 0;
            break;
        }
    }

    ok ? yes : no;
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
