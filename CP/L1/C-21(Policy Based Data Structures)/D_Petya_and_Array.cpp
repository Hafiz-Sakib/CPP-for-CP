// https://codeforces.com/problemset/problem/1042/D

// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

typedef vector<ll> vi;
typedef vector<string> vs;

typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

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
    ll n, t, ans = 0;
    cin >> n >> t;

    vi v(n + 1, 0), sum(n + 1, 0);
    map<ll, int> cnt;
    ordered_set s;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum[i] = sum[i - 1] + v[i];
    }

    s.insert(0);
    cnt[0]++;

    for (int i = 1; i <= n; i++)
    {
        ans += (i - s.order_of_key(sum[i] - t) - cnt[sum[i] - t]);
        s.insert(sum[i]);
        cnt[sum[i]]++;
    }

    cout << ans << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
