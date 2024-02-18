#include <bits/stdc++.h>
using namespace std;

const int n = 1e3;
vector<int> parent(n);
vector<int> size(n);

void make(int v)
{
    parent[v] = v;
    size[v] = 1;
}

int find(int v)
{
    if (v == parent[v])
    {
        return v;
    }
    /*
   path compression,
   setting all parent nodes root node while calling recursively!
   */
    return parent[v] = find(parent[v]);
}

void union_sets(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        // Union by size
        if (size[a] < size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}

int main()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        union_sets(u, v);
    }
    int connected_components = 0;
    for (int i = 1; i <= n; i++)
    {
        if (find(i) == i)
        {
            connected_components++;
        }
    }

    return 0;
}
