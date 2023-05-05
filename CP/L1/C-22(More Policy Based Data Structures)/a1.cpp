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
typedef vector<string> vs;

#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");
#define setp(n) fixed << setprecision(n)

const double eps = 1e-12;
const int mx = 1e8 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int f(int a)
{
    return a ^ 6 + 1;
}

void Boom()
{
    ll n;
    cin >> n;
    vi v(n);
    for (auto &u : v)
    {
        cin >> u;
    }
    for (int i = 0; i <= n; i++)
    {
        int numLiars = i;
        int truthTlrs = n - i;
        int liarsCount = 0;

        for (int j = 0; j < n; j++)
        {
            if (v[j] <= numLiars)
            {
                liarsCount++;
            }
        }

        if (liarsCount > truthTlrs)
        {
            continue;
        }

        if (liarsCount + numLiars >= n)
        {
            cout << numLiars << endl;
        }
    }

    cout << "-1" << endl;
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
