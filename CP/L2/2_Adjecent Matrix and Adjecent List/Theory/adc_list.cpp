#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int main()
{
    vector<vector<int>> graph(N);
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " is connected to : ";
        for (auto neighbor : graph[i])
        {
            cout << " " << neighbor;
        }
        cout << endl;
    }

    // O(N + E) => Space Complexity

    return 0;
}
