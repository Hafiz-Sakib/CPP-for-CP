#include <bits/stdc++.h>
using namespace std;

const int n = 1e3;
vector<vector<int>> g(n);
vector<int> level(n);
vector<bool> vis(n);

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    level[source] = 1;
    while (!q.empty())
    {
        int current_vertex = q.front();
        q.pop();
        for (auto child : g[current_vertex])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[current_vertex] + 1;
            }
        }
    }
}

int main()
{
    int e;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    return 0;
}
