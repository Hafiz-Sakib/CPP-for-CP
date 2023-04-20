// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

typedef vector<int> vi;

#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    int n, mini = INT_MAX, maxi = -1;
    cin >> n;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            l = i;
            break;
        }
        else
        {
            continue;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            r = i;
            break;
        }
        else if (a[i] == b[i])
        {
            continue;
        }
    }
    for (int i = l; i <= r; i++)
    {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }

    if (l > 0)
    {
        for (int i = (l - 1); i >= 0; i--)
        {
            if (a[i] <= mini)
            {
                l--;
                mini = a[i];
            }
            else if (a[i] > mini)
            {
                break;
            }
        }
    }

    if (r < (n - 1))
    {
        for (ll i = r + 1; i < n; i++)
        {
            if (a[i] < maxi)
            {
                break;
            }
            else if (a[i] >= maxi)
            {
                r++;
                maxi = a[i];
            }
        }
    }
    cout << l + 1 << ' ' << r + 1 << endl;
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
