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

const double eps = 1e-12;
const int mx = 1e8 + 123;

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    ll a, b, f, k;
    cin >> a >> b >> f >> k;
    ll fuel[k];
    ll end = a * k;
    ll x = 0;
    for (int i = 0; i < k; i++)
    {
        if (i % 2 == 0)
        {
            fuel[i] = i * a + f;
        }
        else
        {
            fuel[i] = i * a + a - f;
        }
    }
    if (k == 1)
    {
        if (b < f || b < (a - f))
        {
            cout << -1;
        }
        else
        {
            if (b >= a)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
    }
    else if (k == 2)
    {
        if (b < f || b < 2 * (a - f))
        {
            cout << -1;
        }
        else
        {
            if (b >= 2 * a)
            {
                cout << 0;
            }
            else if (b >= 2 * a - f)
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
        }
    }
    else
    {
        if (b < 2 * f || b < 2 * (a - f))
        {
            cout << -1;
        }
        else
        {
            ll count = 0;
            while (x != end)
            {
                if (end - x <= b)
                {
                    x = end;
                }
                else
                {
                    for (int i = k - 1; i >= 0; i--)
                    {
                        if (fuel[i] - x <= b)
                        {
                            x = fuel[i];
                            count++;
                            break;
                        }
                    }
                }
            }
            cout << count;
        }
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
