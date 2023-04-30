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
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vpii;
typedef vector<pair<string, ll>> vpsi;
typedef pair<ll, ll> pii;
typedef map<ll, ll> mii;
typedef map<string, ll> msi;
typedef set<ll> si;
typedef set<string> ss;

#define pb push_back
#define mp make_pair
#define in insert
#define fi first
#define se second
#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()
#define vecMax(data) *max_element(data.begin(), data.end())
#define vecMin(data) *min_element(data.begin(), data.end())
#define vecSum(data) accumulate(data.begin(), data.end(), 0)

#define stringLower(data) transform(data.begin(), data.end(), data.begin(), ::tolower)
#define stringUpper(data) transform(data.begin(), data.end(), data.begin(), ::toupper)
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    ll n, q;
    cin >> n >> q;
    vi v(n);
    for (auto &u : v)
    {
        cin >> u;
    }

    vi sub(n);
    ll l = 1;
    sub[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] <= v[i - 1])
        {
            l++;
        }
        else
        {
            l = 1;
        }
        sub[i] = l;
    }

    vi preSum(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        preSum[i] = preSum[i - 1] + (sub[i - 1] > 2);
    }

    while (q--)
    {
        ll r;
        cin >> l >> r;
        l--;
        r--;
        ll d = l - r - 1;
        ll c = 0;
        if (l < 1)
        {
            c = preSum[r];
        }
        else
        {
            c = preSum[r] - preSum[l + 1];
        }
        ll m = r - l + 1, n = preSum[r] - preSum[l - 1];
        // cout << m - n << endl;
        cout << abs(d - c) << endl;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
