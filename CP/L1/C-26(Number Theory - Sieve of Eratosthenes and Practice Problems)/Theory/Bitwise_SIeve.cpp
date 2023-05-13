#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mx 100001010
long long a[mx / 64 + 200];
int prime[5800000];
int cnt = 0;

void Sieve(int limit)
{
    limit += 100;
    int sq = sqrt(limit);

    for (long long i = 3; i <= sq; i += 2)
    {
        if (!(a[i / 64] & (1LL << (i % 64))))
        {
            for (long long j = i * i; j <= limit; j += 2 * i)
            {
                a[j / 64] |= (1LL << (j % 64));
            }
        }
    }

    prime[cnt++] = 2;
    for (long long i = 3; i <= limit; i += 2)
    {
        if (!(a[i / 64] & (1LL << (i % 64))))
        {
            prime[cnt++] = i;
        }
    }
}
int main()
{
    Boost;
    Sieve(1e8);
    int c = 0;
    for (int i = 0; i < sizeof(prime[0] / prime[0]); i++)
    {
        c++;
        if (c % 100 == 1)
        {
            // cout << prime[i] << endl;
        }
        else
        {
            continue;
        }
    }
    cout << sizeof(prime[0] / prime[0]) << endl;
    cout << fixed << setprecision(10);
    cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";

    return 0;
}
