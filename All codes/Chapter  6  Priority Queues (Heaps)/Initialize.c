PriorityQueue Initialize(int MaxElements)
{
    PriorityQueue H;
    
    if (MaxElements < MinPQSize)
        Error("Priority queue size is too small");
    
    H = malloc(sizeof(struct HeapStruct));
    if (H == NULL)
        FatalError("Out of space!!!");
    
    /* Allocate the array plus one extra for sentinel */
    H -> Elements = malloc((MaxElements + 1)
                            * sizeof(ElementType));
    if (H -> Elements == NULL)
        FatalError("Out of space!!!");
    
    H -> Capacity = MaxElements;
    H -> Size = 0;
    H -> Elements[0] = MinData;
    
    return H;
}
