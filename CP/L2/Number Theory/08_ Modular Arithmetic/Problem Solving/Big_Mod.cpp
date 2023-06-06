// https://vjudge.net/problem/UVA-374

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int BinaryExponentiation(int b, int p, int mod)
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

int main()
{
    Boost;
    int b, p, m;
    while (cin >> b >> p >> m)
    {
        cout << BinaryExponentiation(b, p, m) << endl;
    }
    return 0;
}
