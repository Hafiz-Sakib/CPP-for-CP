#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1), t(m + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> t[i];
    }
    int s = 0;
    for (int i = 1; i <= m; i++)
    {
        s += v[t[i]];
    }
    cout << s << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
