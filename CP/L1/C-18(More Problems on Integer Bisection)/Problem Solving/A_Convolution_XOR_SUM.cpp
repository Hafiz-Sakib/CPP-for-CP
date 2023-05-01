// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int MOD = 1e9 + 7;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
const int mod = 1000000007;
void Boom()
{
    int n;
    cin >> n;
    std::vector<int> v1(30);
    ll mark = 1, ans = 0;
    for (int i = 1; i < n; i++)
    {
        mark = (mark * i) % mod;
    }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        for (int j = 0; j < 20; j++)
        {
            int a1 = (a >> j) & 1;
            if (a1)
            {
                v1[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        for (int j = 0; j < 20; j++)
        {
            int a1 = (a >> j) & 1;
            ll b1 = mark * (1 << j) % mod;
            if (a1)
            {
                ans += (n - v1[j]) * b1 % mod;
            }
            else
            {
                ans += v1[j] * b1 % mod;
            }
        }
    }
    cout << ans % mod << "\n";
}

int main()
{
    Boost;
    Boom();
    return 0;
}
