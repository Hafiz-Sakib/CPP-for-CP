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
vector<bool> is_prime(mx);
vector<int> prime;

void sieve(int n)
{
    is_prime[1] = 0;
    for (int i = 3; i <= n; i += 2)
    {
        is_prime[i] = 1;
    }

    for (int i = 3; (i * i) <= n; i += 2)
    {
        if (is_prime[i])
        {
            for (int j = (i * i); i <= n; j += (i + i))
            {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back(2);

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
    sieve(25);
    for (auto u : prime)
    {
        cout << u << ' ';
    }

    cout << endl;

    return 0;
}
