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
    ll n;
    cin >> n;
    vi v(n), r;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll max1 = LLONG_MIN, max2 = LLONG_MIN, mini1 = LLONG_MAX, mini2 = LLONG_MAX;

    for (ll i = 0; i < n; i++)
    {
        if (v[i] >= max1)
        {
            max2 = max1;
            max1 = v[i];
        }
        else if (v[i] > max2)
        {
            max2 = v[i];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (v[i] <= mini1)
        {
            mini2 = mini1;
            mini1 = v[i];
        }
        else if (v[i] < mini2)
        {
            mini2 = v[i];
        }
    }

    ll p = max1 * max2;
    ll q = mini1 * mini2;

    cout << max(q, p) << endl;
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
