

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
int n, m, sum, z, x, ans;
int t;
int a[200005];
map<int, int> v, p;
vector<int> q;

void Boom()
{
    cin >> n;
    v = p;
    q.clear();
    m = 1;
    ans = z = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        for (int j = 2; j <= sqrt(x); j++)
        {
            if (!v[j] && x % j == 0)
            {
                q.push_back(j);
            }
            while (x % j == 0)
            {
                v[j]++;
                x /= j;
            }
        }
        if (x != 1)
        {
            if (!v[x])
            {
                q.push_back(x);
            }
            v[x]++;
        }
    }
    for (int i = 0; i < q.size(); i++)
    {
        ans += v[q[i]] % 2;
        z += v[q[i]] / 2;
    }
    cout << ans / 3 + z << endl;
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
