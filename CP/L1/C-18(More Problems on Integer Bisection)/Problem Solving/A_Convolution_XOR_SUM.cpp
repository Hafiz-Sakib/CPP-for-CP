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

void Boom()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> cnt(20, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (b[i] & (1 << j))
            {
                cnt[j]++;
            }
        }
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        long long res = 0;
        for (int j = 0; j < 20; j++)
        {
            if (a[i] & (1 << j))
            {
                res += (1LL << j) * cnt[j];
            }
            else
            {
                res += (1LL << j) * (n - cnt[j]);
            }
        }
        ans += res;
    }

    cout << ans % MOD << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
