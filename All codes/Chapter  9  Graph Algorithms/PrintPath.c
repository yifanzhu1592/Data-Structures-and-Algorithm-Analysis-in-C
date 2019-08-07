/* Print shortest path to V after Dijkstra has run */
/* Assume that the path exists */

void PrintPath(Vertex V, Table T)
{
    if (T[V].Path != NotAVertex)
    {
        PrintPath(T[V].Path, T);
        printf(" to");
    }
    printf("%v", V);    /* %v is pseudocode */
}
