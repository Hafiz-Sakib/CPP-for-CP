// https://www.codechef.com/problems/EXISTENCE?tab=statement

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
#define stringLower(data) transform(data.begin(), data.end(), data.begin(), ::tolower)
#define stringUpper(data) transform(data.begin(), data.end(), data.begin(), ::toupper)

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define mod 1000000007
const int mx = 1e8 + 123;
const double eps = 1e-12;

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void normal(ll &a)
{
    a %= mod;
    (a < 0) && (a += mod);
}
ll modMul(ll a, ll b)
{
    a %= mod, b %= mod;
    normal(a), normal(b);
    return (a * b) % mod;
}
ll modAdd(ll a, ll b)
{
    a %= mod, b %= mod;
    normal(a), normal(b);
    return (a + b) % mod;
}
ll modSub(ll a, ll b)
{
    a %= mod, b %= mod;
    normal(a), normal(b);
    a -= b;
    normal(a);
    return a;
}
ll modPow(ll b, ll p)
{
    ll r = 1;
    while (p)
    {
        if (p & 1)
        {
            r = modMul(r, b);
        }
        b = modMul(b, b);
        p >>= 1;
    }
    return r;
}
ll modInverse(ll a)
{
    return modPow(a, mod - 2);
}
ll modDiv(ll a, ll b)
{
    return modMul(a, modInverse(b));
}

void Boom()
{
    ll x, y;
    cin >> x >> y;
    ll t1 = modPow(x, 4) % mod;
    ll q1 = modDiv(t1, 4);
    ll q2 = modPow(y, 2) % mod;
    ll e1 = modAdd(q1, q2) % mod;
    ll q3 = modPow(x, 2) % mod;
    ll e2 = modMul(q3, y) % mod;
    (e1 == e2) ? yes : no;
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
