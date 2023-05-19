// https://lightoj.com/problem/false-ordering

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<pair<ll, ll>> vpii;
typedef pair<ll, ll> pii;
#define endl "\n"
#define all(data) data.begin(), data.end()

const int mx = 1e8 + 123;

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

int NOD(ll n)
{
    // This function will return how many divisors in (n) using Prime Factorization
    int ans = 1;
    // Call Sieve Function First
    for (auto p : primes)
    {
        if (1LL * p * p > n)
        {
            break;
        }
        else if (n % p == 0)
        {
            int cnt = 1;
            while (n % p == 0)
            {
                n /= p;
                cnt++;
            }
            ans *= cnt;
        }
    }
    if (n > 1)
    {
        ans *= 2;
    }
    return ans;
}

bool cmp(pii a, pii b)
{
    if (a.first < b.first)
    {
        return 1;
    }
    else if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return 0;
}
vpii v;

void Boom(int t)
{
    int n, lim = 1e3;
    cin >> n;
    cout << "Case " << t << ": " << v[n - 1].second << endl;
}

int main()
{
    Boost;
    int lim = 1e3;

    // PreCompute
    sieve(lim);
    for (int i = 1; i <= lim; i++)
    {
        int div = NOD(i);
        v.push_back({div, i});
    }
    sort(all(v), cmp);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Boom(i);
    }

    return 0;
}
