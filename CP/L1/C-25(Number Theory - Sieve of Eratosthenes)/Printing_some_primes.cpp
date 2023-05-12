// https://www.spoj.com/problems/TDPRIMES/

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vector<bool> sieve(int n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main()
{
    Boost;

    int n = 1e8;
    vector<bool> primes = sieve(n);
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (primes[i])
        {
            count++;
            if (count % 100 == 1)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}
