// https://www.spoj.com/problems/TDPRIMES/

#include <bits/stdc++.h>
using namespace std;
const int mx = 1e8;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vector<bool> is_prime(mx, 1);
vector<bool> primes;

void sieve(int n)
{
    is_prime[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }

    for (int i = 2; i <= n; i++)
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

    int n = 1e8;
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
