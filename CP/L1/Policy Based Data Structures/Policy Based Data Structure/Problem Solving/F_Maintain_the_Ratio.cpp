// https://algo.codemarshal.org/contests/iiuc-2020/problems/F

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

typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void Boom(int t)
{
    string s;
    ll ans = 0, n, k;
    cin >> s >> k;

    n = s.size();

    vi sum0(n + 1, 0), sum1(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        // Calculating Partial Sum for Both 0 and 1.
        sum0[i + 1] = (s[i] == '0') + sum0[i];
        sum1[i + 1] = (s[i] == '1') + sum1[i];
    }

    ordered_set st;
    map<ll, ll> cnt;

    st.insert(0);
    cnt[0]++;

    for (int i = 1; i <= n; i++)
    {
        ll eqn = sum0[i] - (k * sum1[i]);
        ans += (st.order_of_key(eqn)) + cnt[eqn];
        st.insert(eqn);
        cnt[eqn]++;
    }

    cout << "Case " << t << ": " << ans << endl;
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
