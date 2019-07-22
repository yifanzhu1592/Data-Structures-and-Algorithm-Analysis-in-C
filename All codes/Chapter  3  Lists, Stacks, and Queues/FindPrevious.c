/* If X is not found, then Next field of returned */
/* Position is NULL */
/* Assumes a header */

Position FindPrevious(ElementType X, List L)
{
    Position P;
    
    P = L;
    while (P -> Next != NULL && P -> Next -> Element != X)
        P = P -> Next;
    
    return P;
}
