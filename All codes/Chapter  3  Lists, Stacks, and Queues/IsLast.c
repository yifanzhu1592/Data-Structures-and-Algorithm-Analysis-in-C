/* Return true if P is the last position in list L */
/* Parameter L is unused in this implementation */

int IsLast(Position P, List L)
{
    return P -> Next == NULL;
}
