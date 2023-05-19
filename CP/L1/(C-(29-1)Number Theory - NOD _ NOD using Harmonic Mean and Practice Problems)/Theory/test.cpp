#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
const int mx = 1e8;
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

vector<vector<ll>> PrimePower(1123);
vector<ll> NOD(1123);
vector<pair<ll, ll>> v;

void Boom(int t)
{
    ll n;
    cin >> n;
    cout << "Case " << t << ": " << -1 * v[n - 1].second << endl;
}

int main()
{
    Boost;
    int lim = 1e3;
    sieve(lim);

    for (auto p : primes)
    {
        for (int i = p; i <= lim; i += p)
        {
            int cnt = 1, tmp = i;
            while (tmp % p == 0)
            {
                tmp /= p;
                cnt++;
            }
            PrimePower[i].push_back(cnt);
        }
    }

    for (int i = 1; i <= lim; i++)
    {
        NOD[i] = 1;
        for (auto u : PrimePower[i])
        {
            NOD[i] *= u;
        }
    }
    for (int i = 1; i <= lim; i++)
    {
        v.push_back({NOD[i], -i});
    }

    sort(v.begin(), v.end());

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Boom(i);
    }
    return 0;
}
