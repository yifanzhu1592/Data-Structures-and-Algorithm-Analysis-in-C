SearchTree Insert(ElementType X, SearchTree T)
{
    if (T == NULL)
    {
        /* Create and return a one-node tree */
        T = malloc(sizeof(struct TreeNode));
        if (T == NULL)
            FatalError("Out of space!!!");
        else
        {
            T -> Element = X;
            T -> Left = T -> Right = NULL;
        }
    }
    else if (X < T -> Element)
        T -> Left = Insert(X, T -> Left);
    else if (X > T -> Element)
        T -> Right = Insert(X, T -> Right);
    /* Else X is in the tree already; we'll do nothing */
    
    return T;  /* Do not forget this line!! */
}
