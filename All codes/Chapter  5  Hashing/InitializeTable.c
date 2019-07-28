HashTable InitializeTable(int TableSize)
{
    HashTable H;
    int i;
    
    if (TableSize < MinTableSize)
    {
        Error("Table size too small");
        return NULL;
    }
    
    /* Allocate table */
    H = malloc(sizeof(struct HashTable));
    if (H == NULL)
        FatalError("Out of space!!!");
    
    H -> TableSize = NextPrime(TableSize);
    
    /* Allocate array of lists */
    H -> TheLists = malloc(sizeof(List) * H -> TableSize);
    if (H -> TheLists = NULL)
        FatalError("Out of space!!!");
    
    /* Allocate list headers */
    for (i = 0; i < H -> TableSize; i++)
    {
        H -> TheLists[i] = malloc(sizeof(struct ListNode));
        if (H -> TheLists[i] == NULL)
            FatalError("Out of space!!!");
        else
            H -> TheLists[i] -> Next = NULL;
    }
    
    return H;
}
