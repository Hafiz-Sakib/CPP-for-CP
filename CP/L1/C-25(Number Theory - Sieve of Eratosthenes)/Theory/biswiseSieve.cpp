#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const int MX = 1e7 + 123;
bitset<MX> is_prime;
vector<int> prime;

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

    is_prime[2] = 1;
    prime.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (is_prime[i] == 1)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    Boost;
    sieve(25);
    for (auto u : prime)
    {
        cout << u << ' ';
    }

    cout << endl;
    return 0;
}
