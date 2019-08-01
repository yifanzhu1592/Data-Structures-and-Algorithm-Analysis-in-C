/* Return median of Left, Center, and Right */
/* Order these and hide the pivot */

ElementType Median3(ElementType A[], int Left, int Right)
{
    int Center = (Left + Right) / 2;
    
    if (A[Left] > A[Center])
        Swap(&A[Left], &A[Center]);
    if (A[Left] > A[Right])
        Swap(&A[Left], &A[Right]);
    if (A[Center] > A[Right])
        Swap(&A[Center], &A[Right]);
    
    /* Invariant: A[Left] <= A[Center] <= A[Right] */
    
    Swap(&A[Center], &A[Right - 1]);  /* Hide pivot */
    return A[Right - 1];            /* Return pivot */
}
