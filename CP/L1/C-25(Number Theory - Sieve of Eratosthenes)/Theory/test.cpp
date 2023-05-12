// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

const double eps = 1e-12;
const int mx = 1e8 + 123;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const int MX = 1e8;
// bitset<MX> is_prime;
vector<int> prime;
vector<bool> is_prime(mx, 1);

void sieve(int n)
{
    is_prime[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        for (int j = i + i; i <= n; j += i)
        {
            is_prime[j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (is_prime[i])
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    Boost;
    return 0;
}
