/* This function can be called only if K2 has a left child */
/* Perform a rotate between a node (K2) and its left child */
/* Update heights, then return new root */

static Position SingleRotateWithLeft(Position K2)
{
    Position K1;
    
    K1 = K2 -> Left;
    K2 -> Left = K1 -> Right;
    K1 -> Right = K2;
    
    K2 -> Height = Max(Height(K2 -> Left), Height(K2 -> Right)) + 1;
    K1 -> Height = Max(Height(K1 -> Left), Height(K2 -> Right)) + 1;
    
    return K1;  /* New root */
}
