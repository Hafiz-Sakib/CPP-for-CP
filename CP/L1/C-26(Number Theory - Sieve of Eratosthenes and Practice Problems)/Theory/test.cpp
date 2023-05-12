// https://www.spoj.com/problems/TDPRIMES/

#include <bits/stdc++.h>
using namespace std;

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

    primes.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    Boost;
    sieve(mx);
    int c = 0;
    for (int i = 0; i < primes.size(); i++)
    {
        c++;
        if (c % 100 == 1)
        {
            cout << primes[i] << endl;
        }
    }

    return 0;
}