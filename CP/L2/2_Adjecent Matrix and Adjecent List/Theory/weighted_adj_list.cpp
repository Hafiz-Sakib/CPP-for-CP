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
        // "u" connected with "v" holding "wt" amount of weight.
        int u, v, wt;
        cin >> u >> v >> wt;
        graph[u].push_back({v, wt});
        graph[v].push_back({u, wt});
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " is connected to : ";
        for (auto edge : graph[i])
        {
            int v = edge.first;
            int wt = edge.second;
            cout << " ( Node : " << v << " , Weight : " << wt << ")";
        }
        cout << endl;
    }
    // O(N + E) => Space Complexity

    return 0;
}
