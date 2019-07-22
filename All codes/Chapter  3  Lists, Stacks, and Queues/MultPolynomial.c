void MultPolynomial(const Polynomial Poly1,
                    const Polynomial Poly2,
                    Polynomial PolyProd)
{
    int i, j;
    
    ZeroPolynomial(PolyProd);
    PolyProd -> HighPower = Poly1 -> HighPower + Poly2 -> HighPower;
    
    if (PolyProd -> HighPower > MaxDegree)
        Error("Exceeded array size");
    else
        for (i = 0; i <= Poly1 -> HighPower; i++)
            for (j = 0; j <= Poly2 -> HighPower; j++)
                PolyProd -> CoeffArray[i + j] +=
                        Poly1 -> CoeffArray[i] *
                        Poly2 -> CoeffArray[j];
}
