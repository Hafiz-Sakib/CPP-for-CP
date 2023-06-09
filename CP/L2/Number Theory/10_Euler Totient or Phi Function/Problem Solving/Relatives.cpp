#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1000000007

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const int mx = 1e6;
bitset<mx> is_prime;
vector<int> primes;
void Sieve(int n)
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

int EulerPhi(ll n)
{
    ll ans = n;
    for (auto p : primes)
    {
        if (p * 1LL * p > n)
        {
            break;
        }
        if (n % p == 0)
        {
            ans /= p;
            ans *= (p - 1);
            while (n % p == 0)
            {
                n /= p;
            }
        }
    }

    if (n > 1)
    {
        ans /= n;
        ans *= (n - 1);
    }

    return ans;
}

int main()
{
    Boost;
    Sieve(1e6);
    ll n;
    while (1)
    {
        cin >> n;
        if (!n)
        {
            break;
        }
        else if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << EulerPhi(n) << endl;
        }
    }
    return 0;
}
