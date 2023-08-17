#include <bits/stdc++.h>
using namespace std;
int mx = 101;
int main()
{
    vector<vector<char>> grid(mx, vector<char>(mx));
    int r, c;
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << "Your Grid is :" << endl
         << endl;
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
