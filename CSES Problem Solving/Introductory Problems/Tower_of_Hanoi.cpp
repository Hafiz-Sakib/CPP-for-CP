/*
Problem Name: Tower of Hanoi
Problem Link: https://cses.fi/problemset/task/2165
*/

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve(int a, int b, int c, int n)
{
    if (n == 0)
    {
        return;
    }
    solve(a, c, b, n - 1);
    cout << a << ' ' << c << endl;
    solve(b, a, c, n - 1);
}

signed main()
{
    Boost;

    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;

    solve(1, 2, 3, n);
}