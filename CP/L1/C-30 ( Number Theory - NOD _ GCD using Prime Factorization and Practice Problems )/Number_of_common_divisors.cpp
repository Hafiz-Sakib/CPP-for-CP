// https://www.spoj.com/problems/COMDIV/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int mx = 1e8 + 123;
#define gcd(a, b) __gcd(a, b)

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
void Boom()
{
    int a, b, ans = 0;
    cin >> a >> b;
    ans = NOD(gcd(a, b));
    cout << ans << endl;
}
int main()
{
    Boost;
    sieve(1e6);
    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
