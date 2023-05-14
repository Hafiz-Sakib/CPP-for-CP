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

vector<int> PrimeFactors;

void PrimeFactorization(int n)
{
    PrimeFactors.clear();

    for (auto p : primes)
    {
        if (1LL * p * p > n)
        {
            break;
        }
        else if (n % p == 0)
        {
            while (n % p == 0)
            {
                PrimeFactors.push_back(p);
                n /= p;
            }
        }
    }
    if (n > 1)
    {
        PrimeFactors.push_back(n);
    }
}

void Boom()
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
int main()
{
    Boost;
    sieve(1e7);
    Boom();
    return 0;
}
