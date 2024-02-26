// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bool vis[100000];
vector<int> g[100000];
vector<vector<int>> cc;
vector<int> curr_cc;
void dfs(int v)
{
    vis[v] = 1;
    curr_cc.push_back(v);
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
            curr_cc.clear();
            dfs(i);
            cc.push_back(curr_cc);
            c++;
        }
    }
    cout << c << endl;

    return 0;
}
