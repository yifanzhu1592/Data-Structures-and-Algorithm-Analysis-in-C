/* This function can be called only if K3 has a left */
/* child and K3's left child has a right child */
/* Do the left-right double rotation */
/* Update heights, then return new root */

static Position DoubleRotateWithLeft(Position K3)
{
    /* Rotate between K1 and K2 */
    K3 -> Left = SingleRotateWithRight(K3 -> Left);
    
    /* Rotate between K3 and K2 */
    return SingleRotateWithLeft(K3);
}
