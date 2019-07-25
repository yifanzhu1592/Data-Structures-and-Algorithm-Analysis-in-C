Position FindMax(SearchTree T)
{
    if (T != NULL)
        while (T -> Right != NULL)
            T = T -> Right;
    
    return T;
}
