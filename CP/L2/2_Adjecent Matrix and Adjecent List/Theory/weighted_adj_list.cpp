#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int main()
{
    vector<vector<pair<int, int>>> graph(N);
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph[v1].push_back({v2, wt});
        graph[v2].push_back({v1, wt});
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " is connected to:";
        for (const auto &edge : graph[i])
        {
            int v2 = edge.first;
            int wt = edge.second;
            cout << " (" << v2 << ", " << wt << ")";
        }
        cout << endl;
    }
    // O(N + E) => Space Complexity

    return 0;
}
