void Dijkstra(Table T)
{
    Vertex V, W;

    for ( ; ; )
    {
        V = smallest unknown distance vertex;
        if (V == NotAVertex)
            break;

        T[V].Known = True;
        for each W adjacent to V
            if (!T[W].Known)
                if (T[V].Dist + Cvw < T[W].Dist)
                {   /* Update W */
                    Decrease(T[W].Dist to
                             T[V].Dist + Cvw);
                    T[W].Path = V;
                }
    }
}
