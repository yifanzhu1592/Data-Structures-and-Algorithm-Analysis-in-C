/* Delete first occurrence of X from a list */
/* Assume use of a header node */

void Delete(ElementType X, List L)
{
    Position P, TmpCell;
    
    P = FindPrevious(X, L);
    
    if (!IsLast(P, L))  /* Assumption of header use */
    {                   /* X is found; delete it */
        TmpCell = P -> Next;
        P -> Next = TmpCell -> Next;    /* Bypass deleted call */
        free(TmpCell);
    }
}
