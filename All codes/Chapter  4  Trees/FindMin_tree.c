Position FindMin(SearchTree T)
{
    if (T == NULL)
        return NULL;
    else if (T -> Left == NULL)
        return T;
    else
        return FindMin(T -> Left);
}
