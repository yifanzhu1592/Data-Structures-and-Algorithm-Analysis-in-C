void Unweighted(Table T)    /* Assume T is initialized */
{
    Queue Q;
    Vertex V, W;

    Q = CreateQueue(NumVertex); MakeEmpty(Q);

    /* Enqueue the start vertex S, determined elsewhere */
    Enqueue(S, Q);

    while (!IsEmpty(Q))
    {
        V = Dequeue(Q);

        for each W adjacent to V
            if (T[W].Dist == Infinity)
            {
                T[W].Dist = T[V].Dist + 1;
                T[W].Path = V;
                Enqueue(W, Q);
            }
    }
    DisposeQueue(Q); /* Free the memory */
}
