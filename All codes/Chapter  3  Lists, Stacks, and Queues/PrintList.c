/* Printing a linked list non-recursively */
/* Uses a mechanical translation */
/* No header */

void PrintList(List L)
{
    top:
        if (L != NULL)
        {
            PrintElement(L -> Element);
            L = L -> Next;
            goto top;
        }
}
