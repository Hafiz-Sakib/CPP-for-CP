#include <bits/stdc++.h>
using namespace std;

int dp[1000];
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (dp[n] != -1)
    {
        return dp[n];
    }
    else
    {
        dp[n] = fibo(n - 1) + fibo(n - 2);
        return dp[n];
    }
}
int main()
{
    for (int i = 0; i < 1000; i++)
    {
        dp[i] = -1;
    }
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << fibo(i) << ' ';
    }
    return 0;
}
