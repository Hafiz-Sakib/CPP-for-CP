#include <bits/stdc++.h>
using namespace std;

const int mx = 1e7;
vector<int> parent(mx);
vector<int> set_size(mx);

void make(int v)
{
    parent[v] = v;
    set_size[v] = 1;
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
        // Union by set_size
        if (set_size[a] < set_size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        set_size[a] += set_size[b];
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
