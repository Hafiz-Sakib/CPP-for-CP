#include <bits/stdc++.h>
using namespace std;
int mx = 101;
int main()
{
    vector<vector<int>> adjMat(mx);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> adjMat[i][j];
        }
    }

    return 0;
}
