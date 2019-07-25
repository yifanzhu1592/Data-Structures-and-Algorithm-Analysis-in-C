Position Find(ElementType X, SearchTree T)
{
    if (T == NULL)
        return NULL;
    if (X < T -> Element)
        return Find(X, T -> Left);
    else if (X > T -> Element)
        return Find(X, T -> Right);
    else
        return T;
}
