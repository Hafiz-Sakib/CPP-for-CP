// https://www.spoj.com/problems/SINEGGS/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    ll n, ans = 0;
    cin >> n;
    ans = sqrt(n);
    ((1LL * ans * ans) == n) ? yes : no;
}

int main()
{
    Boost;
    int t;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
