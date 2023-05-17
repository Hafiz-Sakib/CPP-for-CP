// https://www.spoj.com/problems/MAIN12B/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef set<ll> si;
const int mx = 1e6 + 123;

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

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

void PrimeFactorization(ll n)
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

void Boom(int t)
{
    ll n;
    cin >> n;
    si ans;
    for (int i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        PrimeFactorization(a);
        for (auto u : PrimeFactors)
        {
            ans.insert(u);
        }
    }

    cout << "Case #" << t << ": " << ans.size() << endl;

    for (auto u : ans)
    {
        cout << u << endl;
    }
}

int main()
{
    Boost;
    sieve(1e6);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Boom(i);
    }

    return 0;
}
