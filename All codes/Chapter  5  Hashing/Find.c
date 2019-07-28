Position Find(ElementType Key, HashTable H)
{
    Position P;
    List L;
    
    L = H -> TheLists[Hash(Key, H -> TableSize)];
    P = L -> Next;
    while (P != NULL && P -> Element != Key)
                        /* Probably need strcmp!! */
        P = P -> Next;
    return P;
}
