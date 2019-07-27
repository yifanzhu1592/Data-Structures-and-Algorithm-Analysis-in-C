int Height(Tree T)
{
    if (T == NULL)
        return -1;
    else
        return 1 + Max(Height(T -> Left),
                       Height(T -> Right));
}
