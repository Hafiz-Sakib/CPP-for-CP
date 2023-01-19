/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    ll n, k, ans = 0, cnt = 1;
    set<ll> s;
    cin >> n >> k;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }

    for (auto u : s)
    {
        if (cnt == k)
        {
            cout << u << endl;
            return;
        }
        cnt++;
    }

    cout << -1 << endl;
}

int main()
{
    Boost;
    int t = 1;
    while (t--)
    {
        Boom();
    }

    return 0;
}
