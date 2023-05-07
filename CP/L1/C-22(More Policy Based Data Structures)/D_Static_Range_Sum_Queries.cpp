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
typedef vector<string> vs;

#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");
#define setp(n) fixed << setprecision(n)

const double eps = 1e-12;
const int mx = 1e8 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    int n, x, q;
    cin >> n >> q;
    vi sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sum[i] = x + sum[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << endl;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}