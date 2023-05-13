#include <bits/stdc++.h>
using namespace std;

const int mx = 1e8 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bitset<mx> is_prime(mx);
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

    // Time Complexity is : O (n log(log n))

    sieve(1234);

    for (auto u : prime)
    {
        cout << u << endl;
    }

    return 0;
}