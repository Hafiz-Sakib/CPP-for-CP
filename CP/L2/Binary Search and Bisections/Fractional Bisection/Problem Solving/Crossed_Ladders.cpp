// https://lightoj.com/problem/crossed-ladders

// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef vector<ll> vi;

const double eps = 1e-12;
const int mx = 1e8 + 123;
#define setp(n) fixed << setprecision(n)

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom(int t)
{
    double x, y, c;
    cin >> x >> y >> c;

    double l = 0, r = min(x, y), d, h1, h2, h;

    while (r - l > eps)
    {
        d = (l + r) / 2.0;

        h1 = sqrt((x * x) - (d * d));
        h2 = sqrt((y * y) - (d * d));

        h = (h1 * h2) / (h1 + h2);

        if (h > c)
        {
            l = d;
        }
        else
        {
            r = d;
        }
    }
    cout << setp(10) << "Case " << t << ": " << l << endl;
}

int main()
{
    Boost;

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Boom(i);
    }

    return 0;
}
