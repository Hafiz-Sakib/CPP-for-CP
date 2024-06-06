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
typedef pair<string, ll> psi;
typedef pair<ll, string> pis;
typedef pair<double, double> pdd;
typedef map<ll, ll> mii;
typedef map<ll, bool> mib;
typedef map<string, ll> msi;
typedef map<ll, string> mis;
typedef set<ll> si;
typedef set<char> sc;
typedef set<string> ss;
typedef set<double> sd;
typedef queue<ll> qu;
typedef queue<pii> qupii;
typedef priority_queue<ll> pq;
typedef priority_queue<pii> pqpii;
typedef priority_queue<string> pqs;
typedef priority_queue<ll, vi, greater<ll>> pqg;

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define fi first
#define se second
#define space ' '
#define endl "\n"
#define lb lower_bound
#define ub upper_bound

#define left(node) (node * 2)
#define mid(l, r) ((r + l) >> 1)
#define right(node) (node * 2 + 1)

#define b() begin()
#define e() end()
#define sz(x) (int)x.size()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()
#define Reverse(data) reverse(data.begin(), data.end())
#define vecMax(data) *max_element(data.begin(), data.end())
#define vecMin(data) *min_element(data.begin(), data.end())
#define vecSum(data) accumulate(data.begin(), data.end(), 0)
#define vecCount(data, key) count(data.begin(), data.end(), key)

#define setp(n) fixed << setprecision(n)
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem(arr, val) memset(arr, val, sizeof(arr));
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define FOR(data) for (auto it = data.begin(); it != data.end(); it++)
#define stringLower(data) transform(data.begin(), data.end(), data.begin(), ::tolower)
#define stringUpper(data) transform(data.begin(), data.end(), data.begin(), ::toupper)

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define sqr(a) ((a) * (a))
#define mod 1000000007
#define mx_int_prime 999999937

const double PI = acos(-1);
const int mx = 1e8 + 123;
const double eps = 1e-12;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    bool ok = 0;
    int n, q, x = 0, y = 0;
    cin >> n >> q;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(all(v));
    int l = 0, r = n - 1, mid = 0;
    while (l < r)
    {
        mid = (l + r) >> 1;
        if ((v[l].first + v[r].first) == q)
        {
            ok = 1;
            x = v[l].second + 1;
            y = v[r].second + 1;
            break;
        }
        else if ((v[l].first + v[r].first) < q)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    if (ok)
    {
        cout << y << ' ' << x << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}