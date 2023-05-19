// https://lightoj.com/problem/false-ordering

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
typedef vector<pair<ll, ll>> vpii;
typedef pair<ll, ll> pii;

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()

const int mx = 1e8 + 123;
const double eps = 1e-12;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

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

vector<vector<int>> PrimePower(1123);
vector<int> NOD(1123);

int main()
{
    Boost;
    int lim = 1000;
    sieve(1000);

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

    vector<pair<int, int>> v;

    for (int i = 1; i <= lim; i++)
    {
        v.push_back({NOD[i], -i});
    }

    sort(all(v));

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << "Case " << i << ": " << -1 * v[n - 1].second << endl;
    }

    return 0;
}
