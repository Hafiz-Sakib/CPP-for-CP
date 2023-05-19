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
typedef set<char> sc;
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

#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define stringLower(data) trretform(data.begin(), data.end(), data.begin(), ::tolower)
#define stringUpper(data) trretform(data.begin(), data.end(), data.begin(), ::toupper)

const int mx = 1e8 + 123;
const double eps = 1e-12;
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom(ll tc)
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    ll idx = 1, val = n;
    bool t = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] == n)
        {
            idx = i;
        }
    }
    if (v[1] == n)
    {
        for (int i = 1; i <= n; i++)
            if (v[i] == n - 1)
            {
                idx = i;
            }
    }
    bool f = 0;
    vi a;
    for (int i = idx - 1; i >= 1; i--)
    {
        vi d;
        for (int j = idx; j <= n; j++)
        {
            d.pb(v[j]);
        }
        for (int j = idx - 1; j >= i; j--)
        {
            d.pb(v[j]);
        }
        for (int j = 1; j < i; j++)
        {
            d.pb(v[j]);
        }
        if (a.size() == 0 || a < d)
        {
            a = d;
        }
        f = 1;
    }
    for (int i = idx; i <= n; i++)
    {
        vi d;
        for (int j = i + 1; j <= n; j++)
        {
            d.pb(v[j]);
        }
        for (int j = i; j >= idx; j--)
        {
            d.pb(v[j]);
        }
        for (int j = 1; j < idx; j++)
        {
            d.pb(v[j]);
        }
        if (a < d)
        {
            a = d;
        }
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom(t);
    }

    return 0;
}
