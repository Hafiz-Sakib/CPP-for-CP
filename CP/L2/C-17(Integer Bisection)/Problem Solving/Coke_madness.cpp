// https://www.spoj.com/problems/RPC/

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

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

ll mx = 1e6 + 123, n;
vi v(mx);

bool chk(ll val)
{
    for (int i = 0; i < n; i++)
    {
        val += v[i];
        if (val <= 0)
        {
            return false;
        }
    }
    return true;
}

void Boom(int t)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 1, r = 1e14, mid, ans;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (chk(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Scenario #" << t << ": " << ans << endl;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Boom(i);
    }

    return 0;
}
