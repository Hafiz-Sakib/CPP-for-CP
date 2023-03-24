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
    int n;
    cin >> n;
    vector<ll> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    // If we do indexing from 0,range will be indexwise {0 to (n-1)}.But if we keep array from(1 to n),then range will be indexwise
    ll l, r;
    cin >> l >> r;
    if (l == 0)
    {
        // In this Asking for Sum from first Index.That means rth Index of Prefix Sum Will be ans.
        // We don't Have to Subtract anything.
        cout << pref[r] << endl;
    }
    else
    {
        // In this Case take sum of (0--r) then Subtract (0--l)(ami jodi l er ager index er value ta subtract kori taholei ager sob sum baad hoye jaabe)
        cout << pref[r] - pref[l - 1];
    }
}

int main()
{
    Boost;

    Boom();

    return 0;
}
