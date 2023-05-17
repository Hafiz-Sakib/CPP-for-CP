// https://www.spoj.com/problems/HS08PAUL/

// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll> vi;
const int mx = 1e7 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bitset<mx> is_prime;
vector<int> primes;
vector<int> ans(mx, 0);

void sieve(int n)
{
    n += 100;

    is_prime[1] = 0;
    is_prime[2] = 1;
    primes.push_back(2);

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
}

void Boom()
{
    int n;
    cin >> n;
    cout << ans[n] << endl;
}

int main()
{
    Boost;
    sieve(1e7);
    for (int x = 1; x <= 3200; x++)
    {
        for (int y = 1; y <= 60; y++)
        {
            int func = (x * x) + (y * y * y * y);
            if (func > 1e7)
            {
                continue;
            }
            else
            {
                if (is_prime[func])
                {
                    ans[func] = 1;
                }
            }
        }
    }

    for (int i = 1; i <= 1e7; i++)
    {
        ans[i] += ans[i - 1];
    }

    int t;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
