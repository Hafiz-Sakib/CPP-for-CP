#include <bits/stdc++.h>
using namespace std;
int mx = 101;
int main()
{
    vector<vector<char>> grid(mx);
    int r, c;
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
