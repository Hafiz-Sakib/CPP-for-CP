// https://lightoj.com/problem/false-ordering

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
typedef vector<pair<ll, ll>> vpii;
typedef pair<ll, ll> pii;

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define endl "\n"

const int mx = 1e8 + 123;
const double eps = 1e-12;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// False Ordering using Harmonic Mean

vector<int> NOD(1123);

int main()
{
    Boost;
    int lim = 1000;

    for (int i = 1; i <= lim; i++)
    {
        for (int j = i; j <= lim; j += i)
        {
            NOD[j]++;
        }
    }

    vector<pair<int, int>> v;

    for (int i = 1; i <= lim; i++)
    {
        v.push_back({NOD[i], -i});
    }

    sort(all(v));

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << "Case " << i << ": " << -1 * v[n - 1].second << endl;
    }

    return 0;
}
