// https://www.spoj.com/problems/BSEARCH1/

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

#define all(data) data.begin(), data.end()
#define b() begin()
#define endl '\n'
void Boom()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (q--)
    {
        int x;
        cin >> x;
        int lb = lower_bound(all(v), x) - v.b();

        if (binary_search(all(v), x))
        {
            cout << lb << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
