// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/

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
const int mx = 1e6 + 123;
const double eps = 1e-12;

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int BinaryExponentiation(int b, int p)
{
    int ans = 1;
    while (p)
    {
        if (p & 1)
        {
            ans = (ans * 1LL * b) % mod;
        }
        b = (b * 1LL * b) % mod;
        p >>= 1;
    }
    return ans;
}
int fact[mx];
void Boom()
{
    /*
     Just Calculate n! * nCk -->
     n! * k! / (k-n)! * n!
    */
    int n, k, ans;
    cin >> n >> k;
    int a = (fact[n] * 1LL * fact[k]) % mod;
    int b = (fact[k - n] * 1LL * fact[n]) % mod;
    int bInverse = BinaryExponentiation(b, mod - 2);
    ans = (a * 1LL * bInverse) % mod;
    cout << ans << endl;
}
int main()
{
    Boost;
    fact[0] = 1;
    for (int i = 1; i < mx; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % mod;
    }
    int t;
    cin >> t;
    while (t--)
    {
        Boom();
    }
    return 0;
}
