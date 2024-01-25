// Bismillahir Rahmanir Rahim
// https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/?purpose=login&source=problem-page&update=google
#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bool vis[100000];
vector<int> g[100000];
void dfs(int v)
{
    vis[v] = 1;
    for (auto child : g[v])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}
int main()
{
    Boost;
    int n, e, c = 0;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
        {
            continue;
        }
        else
        {
            dfs(i);
            c++;
        }
    }
    cout << c << endl;

    return 0;
}
