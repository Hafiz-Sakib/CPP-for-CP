#include <bits/stdc++.h>
using namespace std;
const int mx = 1e8;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vector<bool> is_prime(mx, 0);
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
    int n = 1e8, count = 0;
    sieve(n);
    for (int i = 0; i < primes.size(); i++)
    {
        count++;
        if (count % 100 == 1)
        {
            cout << primes[i] << endl;
        }
    }

    return 0;
}
