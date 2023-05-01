// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
#define space ' '
#define endl "\n"
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
    ll n, ans = LLONG_MIN, ok = 0;
    cin >> n;

    vi a(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    sort(all(a));

    cout << a[n] * a[n - 1] * a[n - 2] << endl;
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
