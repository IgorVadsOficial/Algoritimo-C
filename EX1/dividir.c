#include <stdio.h>

int main(void)
{
    float n1, n2, result;
    printf("Digite o dividendo: ");
    scanf("%f", &n1);
    printf("Digite o divisor: ");
    scanf("%f", &n2);
    result = n1 / n2;
    if (n2 != 0 )
    {
        printf("\nO resultado da sua divisao eh: %.0f", result);
    }
    else
    {
        printf("\n***** Nao eh possivel fazer essa divisao! *****");
    }
    return (0);
}





