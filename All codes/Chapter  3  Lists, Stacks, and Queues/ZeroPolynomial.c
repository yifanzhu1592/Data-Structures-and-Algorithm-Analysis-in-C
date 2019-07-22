void ZeroPolynomial(Polynomial Poly)
{
    int i;
    
    for (i = 0; i <= MaxDegree; i++)
        Poly -> CoeffArray[i] = 0;
    Poly -> HighPower = 0;
}
