Stack CreateStack(void)
{
    Stack S;
    
    S = malloc(sizeof(struct Node));
    if (S == NULL)
        FatalError("Out of space!!!");
    MakeEmpty(S);
    return S;
}

void MakeEmpty(Stack S)
{
    if (S == NULL)
        Error("Must use CreateStack first");
    else
        while (!IsEmpty(S))
            Pop(S);
}
