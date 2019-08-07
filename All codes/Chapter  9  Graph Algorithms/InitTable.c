void InitTable(Vertex Start, Graph G, Table T)
{
    int i;
    
    ReadGraph(G, T);    /* Read graph somehow */
    for (i = 0; i < NumVertex; i++)
    {
        T[i].Known = False;
        T[i].Dist  = Infinity;
        T[i].Path  = NotAVertex;
    }
    T[Start].dist = 0;
}
