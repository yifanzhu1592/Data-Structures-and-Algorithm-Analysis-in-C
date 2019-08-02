#ifndef _DisjSet_H

typedef int DisjSet[NumSets + 1];
typedef int SetType;
typedef itn ElementType;

void Initialize(DisjSet S);
void SetUnion(DisjSet S, SetType Root1, SetType Root2);
SetType Find(ElementType X, DisjSet S);

#endif /* _DisjSet_H */
