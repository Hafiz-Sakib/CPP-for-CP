#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1000000007

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int BinaryExponentiation(int b, int p)
{
    int ans = 1;
    while (p)
    {
        if (p & 1)
        {
            ans = (ans * 1LL * b) % mod;
        }
        b = (b * 1LL * b) % mod;
        p >>= 1;
    }
    return ans;
}

void Boom()
{
}

int main()
{
    Boost;
    Boom();
    return 0;
}
