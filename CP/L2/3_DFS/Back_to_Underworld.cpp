// https://lightoj.com/problem/back-to-underworld

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
const int mx = 2e4 + 123;
const double eps = 1e-12;

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vector<bool> vis(mx);
vector<bool> is_dual(mx);
vector<vector<int>> g(mx);
int curr__cc_size, color_1;

void dfs(int v, int color)
{
    vis[v] = 1;
    if (color == 1)
    {
        color_1++;
    }

    curr__cc_size++;

    int new_color;
    if (color == 1)
    {
        new_color = 2;
    }
    else
    {
        new_color = 1;
    }

    for (auto child : g[v])
    {
        if (!vis[child])
        {
            dfs(child, new_color);
        }
    }
}
void clear_data()
{
    for (int i = 1; i < mx; i++)
    {
        g[i].clear();
        vis[i] = 0;
        is_dual[i] = 0;
    }
}
void Boom(int t)
{
    clear_data();
    int e, ans = 0;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        is_dual[u] = 1;
        is_dual[v] = 1;
    }
    for (int i = 1; i <= mx; i++)
    {
        if (is_dual[i] and !vis[i])
        {
            curr__cc_size = 0, color_1 = 0;
            dfs(i, 1);
            ans += max(color_1, (curr__cc_size - color_1));
        }
    }

    cout << "Case " << t << ": " << ans << endl;
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
