// https://lightoj.com/problem/expanding-rods

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
#define PI acos(-1)
#define setp(n) fixed << setprecision(n)

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom(int t)
{
    double L, n, c, cL;
    cin >> L >> n >> c;

    cL = (1 + (n * c)) * L;

    double l = 0, r = 1e18, R, h, testing_cL;

    for (int i = 0; i < 100; i++)
    {
        R = (l + r) / 2.0;

        testing_cL = R * (2.0 * asin(L / (2.0 * R)));

        if (testing_cL > cL)
        {
            l = R;
        }
        else
        {
            r = R;
        }
    }

    h = R - sqrt((R * R) - ((L / 2.0) * (L / 2.0)));

    cout << setp(10) << "Case " << t << ": " << h << endl;
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
