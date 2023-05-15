// https://vjudge.net/problem/UVA-11466

// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int mx = 1e8 + 123;
#define endl "\n"
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bitset<mx> is_prime;
vector<int> primes;

void sieve(int n)
{
    n += 100;

    for (int i = 3; i <= n; i += 2)
    {
        is_prime[i] = 1;
    }

    for (int i = 3; (i * i) <= n; i += 2)
    {
        if (is_prime[i])
        {
            for (int j = (i * i); j <= n; j += (i + i))
            {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[1] = 0;
    is_prime[2] = 1;
    primes.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

vector<ll> PrimeFactors;
ll c = 0;
void PrimeFactorization(ll n)
{
    PrimeFactors.clear();
    c = 0;
    for (auto p : primes)
    {
        if (1LL * p * p > n)
        {
            break;
        }
        else if (n % p == 0)
        {
            c++;
            while (n % p == 0)
            {
                PrimeFactors.push_back(p);
                n /= p;
            }
        }
    }
    if (n > 1)
    {
        c++;
        PrimeFactors.push_back(n);
    }
}
void Boom()
{
    while (1)
    {
        ll n = 0;
        cin >> n;
        if (!n)
        {
            break;
        }

        PrimeFactorization(abs(n));

        if (c <= 1)
        {
            cout << -1 << endl;
        }
        else
        {
            reverse(PrimeFactors.begin(), PrimeFactors.end());
            cout << PrimeFactors[0] << endl;
        }
    }
}
int main()
{
    sieve(1e7);
    Boost;
    Boom();
    return 0;
}
