#include <iostream>
#include <vector>

using namespace std;

void sieve(int n, vector<int> &primes)
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

    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

void print_primes(int start, int end)
{
    vector<int> primes;
    sieve(end, primes);

    for (int i = start; i <= end; i++)
    {
        bool is_prime = true;

        for (int j = 0; j < primes.size() && primes[j] * primes[j] <= i; j++)
        {
            if (i % primes[j] == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime && i != 1)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int start = 25, end = 28;

    cout << "Prime numbers between " << start << " and " << end << " are: ";
    print_primes(start, end);
    return 0;
}
