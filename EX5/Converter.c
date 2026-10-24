#include <stdio.h>

int main()
{
    float CotDol, Conver, Result;
    printf("Qual a cotacao do dolar atual?");
    scanf("%f", &CotDol);
    printf("Quantos reais deseja converter?");
    scanf("%f", &Conver);
    Result = (CotDol * Conver);
    printf("%.0f", Conver);
    printf(" em dolares sao: US$");
    printf("%.2f", Result);
    return 0;
}
