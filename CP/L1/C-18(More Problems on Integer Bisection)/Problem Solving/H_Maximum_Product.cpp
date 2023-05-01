// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
#define space ' '
#define endl "\n"
#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    ll n, ans = LLONG_MIN, ok = 0;
    cin >> n;

    vi v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(rall(v));

    cout << max(1LL * v[0] * v[1] * v[2], 1LL * v[0] * v[n - 2] * v[n - 1]) << endl;
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
