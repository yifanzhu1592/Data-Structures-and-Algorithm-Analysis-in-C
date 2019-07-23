void Push(ElementType X, Stack S)
{
    PtrToNode TmpCell;
    
    TmpCell = malloc(sizeof(struct Node));
    if (TmpCell == NULL)
        FatalError("Out of space!!!");
    else
    {
        TmpCell -> Element = X;
        TmpCell -> Next = S -> Next;
        S -> Next = TmpCell;
    }
}
