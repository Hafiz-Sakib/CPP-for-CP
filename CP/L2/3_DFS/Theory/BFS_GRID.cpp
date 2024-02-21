#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
bool vis[5][5];

bool valid(int x, int y)
{
    return (x >= 0 and x < 5 and y >= 0 and y < 5 and !vis[x][y]);
}

void bfs(int source_x, int source_y)
{
    queue<pair<int, int>> q;
    q.push({source_x, source_y});
    vis[source_x][source_y] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int next_x = x + dx[i];
            int next_y = y + dy[i];
            if (valid(next_x, next_y))
            {
                vis[next_x][next_y] = 1;
                q.push({next_x, next_y});
            }
        }
    }
}

int main()
{
    bfs(2, 2);
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
