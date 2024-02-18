// https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/?purpose=login&source=problem-page&update=google

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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        union_sets(u, v);
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (find(i) == i)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
