void PrintTree(SearchTree T)
{
    if (T != NULL)
    {
        PrintTree(T -> Left);
        PrintElement(T -> Element);
        PrintTree(T -> Right);
    }
}
