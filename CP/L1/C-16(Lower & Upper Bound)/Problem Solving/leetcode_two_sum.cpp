// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

#include <bits/stdc++.h>
using namespace std;

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
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= v.size(); i++)
    {
        int d = t - v[i];
        int lb = lower_bound(v.begin(), v.begin() + i - 1, d) - v.begin();
        if (lb != v.size() && v[lb] == d)
        {
            cout << lb << ' ' << i << endl;
        }
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
