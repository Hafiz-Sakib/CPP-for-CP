
void clear_graph(int node)
{
    for (int i = 0; i < node; i++)
    {
        g[i].clear();
        vis[i] = 0;
        // level[i] = 0;
    }
}
