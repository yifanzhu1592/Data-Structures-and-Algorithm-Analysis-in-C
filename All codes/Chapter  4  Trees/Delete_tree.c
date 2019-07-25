SearchTree Delete(ElementType X, SearchTree T)
{
    Position TmpCell;
    
    if (T == NULL)
        Error("Element not found");
    else if (X < T -> Element)  /* Go left */
        T -> Left = Delete(X, T -> Left);
    else if (X > T -> Element)  /* Go right */
        T -> Right = Delete(X, T -> Right);
    else    /* Found element to be deleted */
    if (T -> Left && T -> Right)    /* Two children */
    {
        /* Replace with smallest in right subtree */
        TmpCell = FindMin(T -> Right);
        T -> Element = TmpCell -> Element;
        T -> Right = Delete(T -> Element, T -> Right);
    }
    else    /* One or zero children */
    {
        TmpCell = T;
        if (T -> Left == NULL) /* Also handles 0 children */
            T = T -> Right;
        else if (T -> Right == NULL)
            T = T -> Left;
        free(TmpCell);
    }
    
    return T;
}
