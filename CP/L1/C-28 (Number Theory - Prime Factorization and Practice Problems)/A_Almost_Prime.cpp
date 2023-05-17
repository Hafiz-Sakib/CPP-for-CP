#include <bits/stdc++.h>
using namespace std;

const int mx = 1e6;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bitset<mx> is_prime;
vector<int> primes;

void sieve(int n)
{
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

vector<vector<int>> PrimeFactors(mx); // (1 theke n) Prottek number er Jonner alda vector jekhane taader nijeder Prime Factors thakbe.

void PrimeFactorization(int n)
{
    // Time Complexity :  (n * ln(n) )
    for (auto p : primes)
    { // protterk prime er access nibo and oi prime jader jader factors tader vector er moddhe giye update kore ashbo.
        for (int i = p; i <= n; i += p)
        {
            PrimeFactors[i].push_back(p);
        }
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (PrimeFactors[i].size() == 2)
        {
            c++;
        }
    }
    cout << c << endl;
}

int main()
{
    Boost;
    sieve(1000000);
    int n;
    cin >> n;
    PrimeFactorization(n);
    return 0;
}
