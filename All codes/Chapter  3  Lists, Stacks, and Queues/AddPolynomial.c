void AddPolynomial(const Polynomial Poly1,
                   const Polynomial Poly2,
                   Polynomial PolySum)
{
    int i;
    
    ZeroPolynomial(PolySum);
    PolySum -> HighPower = Max(Poly1 -> HighPower,
                               Poly2 -> HighPower);
    
    for (i = PolySum -> HighPower; i >= 0; i--)
        PolySum -> CoeffArray[i] = Poly1 -> CoeffArray[i]
                                 + Poly2 -> CoeffArray[i];
}
