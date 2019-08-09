void Dfs(Vertex V)
{
    Visited[V] = True;
    for each W adjacent to V
        if (!Visited[W])
            Dfs(W);
}
