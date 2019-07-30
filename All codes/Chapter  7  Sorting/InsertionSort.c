void InsertionSort(ElementType A[], int N)
{
    int j, P;

    ElementType Tmp;
    for (P = 1; P < N; P++)
    {
        Tmp = A[P];
        for (j = P; j > 0 && A[j - 1] > Tmp; j--)
            A[j] = A[j - 1];
        A[j] = Tmp;
    }
}
