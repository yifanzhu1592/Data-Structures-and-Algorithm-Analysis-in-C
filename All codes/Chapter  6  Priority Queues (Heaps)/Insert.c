/* H -> Element[0] is a sentinel */

void Insert(ElementType X, PriorityQueue H)
{
    int i;
    
    if (IsFull(H))
    {
        Error("Priority queue is full");
        return;
    }
    
    for (i = ++H->Size; H -> Elements[i / 2] > X; i /= 2)
        H -> Elements[i] = H -> Elements[i / 2];
    H -> Elements[i] = X;
}
