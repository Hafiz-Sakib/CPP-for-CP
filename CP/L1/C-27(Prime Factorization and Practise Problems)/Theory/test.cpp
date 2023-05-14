// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
const int mx = 1e8 + 123;
#define pb push_back
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vector<int> primefactor;

void Boom()
{
    int n;
    cin >> n;
    while (n % 2 == 0)
    {
        primefactor.pb(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            primefactor.pb(i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        primefactor.pb(n);
    }

    for (auto u : primefactor)
    {
        cout << u << ' ';
    }
    cout << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
