// https://algo.codemarshal.org/contests/ncpc18/problems/I

//  Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

typedef vector<ll> vi;
#define endl "\n"

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vi a(1e4 + 123, 0);

bool chk(int m, int k, int d)
{
    int last = a[1] + d;
    k--;
    for (int i = 2; i <= m; i++)
    {
        if (abs(a[i] - last) > d)
        {
            if (k == 0)
            {
                return false;
            }
            else
            {
                last = a[i] + d;
                k--;
            }
        }
    }

    return true;
}

void Boom()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = n, ans, mid;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (chk(m, k, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
