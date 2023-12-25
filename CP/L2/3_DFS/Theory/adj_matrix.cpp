#include <bits/stdc++.h>
using namespace std;
const int mx = 101;
int graph[mx][mx];
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }

    // O(N^2) - space complexity

    return 0;
}
