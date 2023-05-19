#include <bits/stdc++.h>
using namespace std;
#define here fprintf(stderr, "====I am Here====\n");

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

vector<vector<int>> v(1123);
vector<int> NOD(1123);

void Boom(int t)
{
}

int main()
{
    int lim = 1e3;
    sieve(lim);
    Boost;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Boom(i);
    }
    return 0;
}
