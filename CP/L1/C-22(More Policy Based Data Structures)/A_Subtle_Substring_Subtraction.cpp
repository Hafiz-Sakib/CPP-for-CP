// https://codeforces.com/contest/1673/problem/A

// Bismillahir Rahmanir Rahim

/*

string author;
author = Hafiz_Sakib;

*/

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int sum(string s)
{
    int ans = 0;
    for (auto u : s)
    {
        ans += (u - 'a' + 1);
    }
    return ans;
}

void Boom()
{
    string s;
    cin >> s;

    int n = s.size(), ans;

    if (n == 1)
    {
        cout << "Bob " << sum(s) << endl;
    }
    else
    {
        if (!(n & 1))
        {
            cout << "Alice " << sum(s) << endl;
        }
        else
        {
            if (s[0] > s[n - 1])
            {
                ans = sum(s.substr(0, n - 1)) - (s[n - 1] - 'a' + 1);
                cout << "Alice " << ans << endl;
            }
            else
            {
                ans = sum(s.substr(1, n - 1)) - (s[0] - 'a' + 1);
                cout << "Alice " << ans << endl;
            }
        }
    }
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
