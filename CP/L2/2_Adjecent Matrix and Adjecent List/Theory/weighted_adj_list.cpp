#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int main()
{
    // { node,cost } => pair
    //{ {(2,3),(3,5),(4,8)},{(1,5),(3,4)} } => ebhabe thakbe vector e
    vector<vector<pair<int, int>>> graph(N);
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        // "u" connected with "v" holding "cost" amount of weight.
        int u, v, cost;
        cin >> u >> v >> cost;
        graph[u].push_back({v, cost});
        graph[v].push_back({u, cost});
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " is connected to : ";
        for (auto edge : graph[i])
        {
            int v = edge.first;
            int cost = edge.second;
            cout << " ( Node : " << v << " , Weight : " << cost << ")";
        }
        cout << endl;
    }
    // O(N + E) => Space Complexity

    return 0;
}
