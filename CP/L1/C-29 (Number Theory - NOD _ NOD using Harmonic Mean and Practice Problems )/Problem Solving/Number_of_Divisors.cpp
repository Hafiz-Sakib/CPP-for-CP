// https://www.hackerearth.com/problem/algorithm/number-of-divisors-5/?purpose=login&source=problem-page&update=google

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int mx = 1e8;

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

int NOD(ll n)
{
    int ans = 1;
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

int main()
{
    sieve(1e6);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << NOD(n) << endl;
    }

    return 0;
}
