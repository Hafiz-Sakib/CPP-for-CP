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

vector<int> PrimeFactors;

void PrimeFactorization(int n)
{
    PrimeFactors.clear();

    while (n % 2 == 0)
    {
        PrimeFactors.pb(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            PrimeFactors.pb(i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        PrimeFactors.pb(n);
    }
}

int main()
{
    Boost;
    int n;
    cin >> n;
    PrimeFactorization(n);
    for (auto u : PrimeFactors)
    {
        cout << u << ' ';
    }
    cout << endl;
    return 0;
}