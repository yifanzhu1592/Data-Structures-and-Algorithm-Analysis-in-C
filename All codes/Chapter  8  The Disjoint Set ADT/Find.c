SetType Find(ElementType X, DisjSet S)
{
    if (S[X] <= 0)
        return X;
    else
        return Find(S[X], S);
}
