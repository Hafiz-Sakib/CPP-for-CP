#include <bits/stdc++.h>
using namespace std;

const int N = 1e8;
bitset<N + 1> is_prime;
vector<int> prime;

void sieve(int n)
{
    is_prime.set();
    is_prime[0] = is_prime[1] = 0;

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
            prime.push_back(i);
        }
    }
}

int main()
{
    sieve(1234);
    for (auto p : prime)
    {
        cout << p << endl;
    }
    return 0;
}
