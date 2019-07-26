AvlTree Insert(ElementType X, AvlTree T)
{
    if (T == NULL)
    {
        /* Create and return a one-node tree */
        T = malloc(sizeof(struct AvlNode));
        if (T == NULL)
            FatalError("Out of space!!!");
        else
        {
            T -> Element = X;
            T -> Height = 0;
            T -> Left = T -> Right = NULL;
        }
    }
    else if (X < T -> Element)
    {
        T -> Left = Insert(X, T -> Left);
        if (Height(T -> Left) - Height(T -> Right) == 2)
            if (X < T -> Left -> Element)
                T = SingleRotateWithLeft(T);
            else
                T = DoubleRotateWithLeft(T);
    }
    else if (X > T -> Element)
    {
        T -> Right = Insert(X, T -> Right);
        if (Height(T -> Right) - Height(T -> Left) == 2)
            if (X > T -> Right -> Element)
                T = SingleRotateWithRight(T);
            else
                T = DoubleRotateWithRight(T);
    }
    /* Else X is in the tree already; we'll do nothing */
    
    T -> Height = Max(Height(T -> Left), Height(T -> Right)) + 1;
    
    return T;
}
