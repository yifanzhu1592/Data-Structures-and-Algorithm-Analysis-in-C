void Kruskal(Graph G)
{
    int EdgesAccepted;
    DisjSet S;
    PriorityQueue H;
    Vertex U, V;
    SetType Uset, Vset;
    Edge E;
    
    Initialize(S);
    ReadGraphIntoHeapArray(G, H);
    BuildHeap(H);
    
    EdgesAccepted = 0;
    while (EdgesAccepted < NumVertex - 1)
    {
        E = DeleteMin(H);   /* E = (U,V) */
        Uset = Find(U, S);
        Vset = Find(V, S);
        if (Uset != Vset)
        {
            /* Accept the edge */
            EdgesAccepted++;
            SetUnion(S, USet, VSet);
        }
    }
}
