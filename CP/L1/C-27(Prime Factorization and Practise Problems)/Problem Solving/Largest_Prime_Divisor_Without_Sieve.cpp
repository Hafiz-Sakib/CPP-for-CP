// https://vjudge.net/problem/UVA-583

// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int mx = 1e8 + 123;
#define pb push_back
#define endl "\n"

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
void Boom()
{
    ll n;
    while (1)
    {
        int n;
        while (1)
        {
            cin >> n;
            if (!n)
            {
                break;
            }
            PrimeFactorization(abs(n));
            int sz = PrimeFactors.size();

            if (sz == 1)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << PrimeFactors[sz - 1] << endl;
            }
        }
    }
}
int main()
{
    Boost;
    Boom();
    return 0;
}
