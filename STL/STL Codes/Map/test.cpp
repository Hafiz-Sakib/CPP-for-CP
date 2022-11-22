#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int fn[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        fn[x] = i;
    }
    for (int x = 1; x <= n; x++)
    {
        cout << fn[x] << " ";
    }
    return 0;
}