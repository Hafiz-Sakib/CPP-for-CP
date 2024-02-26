// https://lightoj.com/problem/guilty-prince
// 2D Grid DFS Problem

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
const int mx = 30;
const double eps = 1e-12;

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool vis[mx][mx];
char g[mx][mx];

int c, r, cnt = 0;

bool valid(int x, int y)
{
    return (x >= 0 and x < r and y >= 0 and y < c and !vis[x][y] and g[x][y] != '#');
}

void dfs(int x, int y)
{
    if (vis[x][y])
    {
        return;
    }

    vis[x][y] = 1;
    cnt++;

    for (int i = 0; i < 4; i++)
    {
        int next_x = x + dx[i];
        int next_y = y + dy[i];
        if (valid(next_x, next_y))
        {
            dfs(next_x, next_y);
        }
    }
}
void Boom(int t)
{
    memset(vis, 0, sizeof(vis));
    cnt = 0;

    int x, y;
    cin >> c >> r;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> g[i][j];
            if (g[i][j] == '@')
            {
                x = i;
                y = j;
            }
        }
    }

    dfs(x, y);

    cout << "Case " << t << ": " << cnt << endl;
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
