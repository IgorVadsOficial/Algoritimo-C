#include <stdio.h>
// Um feirista vende suas macas a R$ 1,30 por unidade, se forem compradas menos de
// uma duzia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma duzia.

int main(void)
{
    int macas;
    float result;

    printf("Quantas macas voce deseja? ");
    scanf("%d", &macas);

    if (macas >= 12 )
    {
        result = macas * 1.10;
        printf("O valor total a pagar eh: R$ %.2f  ", result);
    }
    else
    {
        result = macas * 1.30;
        printf("O valor total a pagar eh: R$ %.2f  ", result);
    }
    return 0;
}

