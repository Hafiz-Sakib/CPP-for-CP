// https://codeforces.com/contest/776/problem/B

// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
const int mx = 1e5 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bitset<mx> is_prime;
void sieve(int n)
{
    n += 100;
    is_prime[2] = 1;

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
    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    else if (n == 2)
    {
        cout << 1 << endl;
        cout << 1 << ' ' << 1 << endl;
    }
    else
    {
        sieve(n);
        cout << 2 << endl;
        for (int i = 2; i <= (n + 1); i++)
        {
            if (is_prime[i])
            {
                cout << 1 << ' ';
            }
            else
            {
                cout << 2 << ' ';
            }
        }
        cout << endl;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
