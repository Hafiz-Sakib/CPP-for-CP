// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

bool vis[1000];
vector<vector<int>> adj(1110);
void dfs(int v)
{
    vis[v] = 1;
    // cout << v << " -> ";
    for (auto child : adj[v])
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
    return 0;
}
