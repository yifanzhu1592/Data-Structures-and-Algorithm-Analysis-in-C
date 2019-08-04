void Unweighted(Table T)    /* Assume T is initialized */
{
    int CurrDist;
    Vertex V, W;

    for (CurrDist = 0; CurrDist < NumVertex; CurrDist++)
        for each vertex V
            if (!T[V].Known && T[V].Dist == CurrDist)
            {
                T[V].Known = True;
                for each W adjacent to V
                    if (T[W].Dist == Infinity)
                    {
                        T[W].Dist = CurrDist + 1;
                        T[W].Path = V;
                    }
            }
}
