// https://www.spoj.com/problems/BSEARCH1/

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define all(data) data.begin(), data.end()
#define b() begin()
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

        if (lb == v.size())
        {
            cout << -1 << endl;
        }
        else if (v[lb] != x)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << lb << endl;
        }
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
