// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
const int mx = 1e6 + 123;

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
int fact[mx];
void Boom()
{
    /*
     Just Calculate n! * nCk -->
     n! * k! / (k-n)! * n!
    */
    int n, k, ans;
    cin >> n >> k;
    int a = (fact[n] * 1LL * fact[k]) % mod;
    int b = (fact[k - n] * 1LL * fact[n]) % mod;
    int bInverse = BinaryExponentiation(b, mod - 2);
    ans = (a * 1LL * bInverse) % mod;
    cout << ans << endl;
}
int main()
{
    Boost;
    fact[0] = 1;
    for (int i = 1; i < mx; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % mod;
    }
    int t;
    cin >> t;
    while (t--)
    {
        Boom();
    }
    return 0;
}
