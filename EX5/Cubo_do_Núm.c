#include <stdio.h>
#include <math.h>

int main()
{
    float n1, cubo;
    printf("Digite um numero para descobrir o seu cubo: ");
    scanf("%f", &n1);
    cubo = pow(n1, 3);
    printf("O cubo do seu numero eh: %.0f\n", cubo);
}
