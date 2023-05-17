// https://codeforces.com/contest/474/problem/B

// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define endl "\n"
#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    int n, a, q, ask;
    cin >> n;
    vi psum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        psum[i] = psum[i - 1] + a;
    }

    cin >> q;

    while (q--)
    {
        cin >> ask;
        cout << lower_bound(all(psum), ask) - psum.begin() << endl;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
