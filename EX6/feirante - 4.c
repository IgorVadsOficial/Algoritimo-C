#include <stdio.h>

int main(void)
{
    float macas, valor;

    printf("Quantas macas voce deseja? ");
    scanf("%f", &macas);

    if (macas >= 12)
    {
        valor = macas * 1.10;
        printf("O valor total a pagar eh de: R$ %.2f ", valor);
    }
    else
    {
        valor = macas * 1.30;
        printf("O valor total a pagar eh de: R$ %.2f ", valor);
    }

    return 0;
}
