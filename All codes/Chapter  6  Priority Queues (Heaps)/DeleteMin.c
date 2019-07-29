ElementType DeleteMin(PriorityQueue H)
{
    int i, Child;
    ElementType MinElement, LastElement;
    
    if (IsEmpty(H))
    {
        Error("Priority queue is empty");
        return H -> Elements[0];
    }
    MinElement = H -> Elements[1];
    LastElement = H -> Elements[H->Size--];
    
    for (i = 1; i * 2 <= H -> Size; i = Child)
    {
        /* Find smaller child */
        Child = i * 2;
        if (Child != H -> Size && H -> Elements[Child + 1]
                                < H -> Elements[Child])
            Child++;
        
        /* Percolate one level */
        if (LastElement > H -> Elements[Child])
            H -> Elements[i] = H -> Elements[Child];
        else
            break;
    }
    H -> Elements[i] = LastElement;
    return MinElement;
}
