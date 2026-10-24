#include <stdio.h>

int main(void)
{
    float numerador, denominador, result;

    printf("Digite o numerador: ");
    scanf("%f", &numerador);

    printf("Digite o denominador: ");
    scanf("%f", &denominador);

    result = numerador / denominador;

    if (denominador != 0)
    {
        printf("O resultado da sua divisao eh: %.2f", result);
    }
    else
    {
        printf("Divisao invalida!");
    }
    return 0;
}
