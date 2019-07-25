SearchTree MakeEmpty(SearchTree T)
{
    if (T != NULL)
    {
        MakeEmpty(T -> Left);
        MakeEmpty(T -> Right);
        free(T);
    }
    return NULL;
}
