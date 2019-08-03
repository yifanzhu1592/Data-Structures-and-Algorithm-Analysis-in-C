/* Assume Root1 and Root2 are roots */
/* union is a C keyword, so this routine */
/* is named SetUnion */

void SetUnion(DisjSet S, SetType Root1, SetType Root2)
{
    S[Root2] = Root1;
}
