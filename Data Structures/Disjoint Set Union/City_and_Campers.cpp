// https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-campers/

#include <bits/stdc++.h>
using namespace std;

const int mx = 1e7;
vector<int> parent(mx);
vector<int> set_size(mx);
multiset<int> camper_group;

void make(int v)
{
    parent[v] = v;
    set_size[v] = 1;
    camper_group.insert(1);
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

void merge(int a, int b)
{
    camper_group.erase(camper_group.find(set_size[a]));
    camper_group.erase(camper_group.find(set_size[b]));

    camper_group.insert(set_size[a] + set_size[b]);
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
        merge(a, b);
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
        if (camper_group.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int mini = *(camper_group.begin());
            int maxi = *(--camper_group.end());
            cout << (maxi - mini) << endl;
        }
    }

    return 0;
}
