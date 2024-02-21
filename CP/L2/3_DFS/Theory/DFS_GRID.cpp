#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
bool vis[5][5];

bool valid(int x, int y)
{
    return (x >= 0 and x < 5 and y >= 0 and y < 5 and !vis[x][y]);
}

void dfs(int x, int y)
{
    if (vis[x][y])
    {
        return;
    }

    vis[x][y] = 1;

    for (int i = 0; i < 8; i++)
    {
        int next_x = x + dx[i];
        int next_y = y + dy[i];
        if (valid(next_x, next_y))
        {
            dfs(next_x, next_y);
        }
    }
}

int main()
{
    dfs(2, 2);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << vis[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
