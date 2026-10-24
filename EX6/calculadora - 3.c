#include <stdio.h>

int main(void)
{
    float n1, n2, adi, sub, mult, div;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("-------------------------------\n");
    printf("|  Digite 1 para adicao:       |\n");
    printf("------------------------------\n");
    printf("|  Digite 2 para subtracao:    |\n");
    printf("------------------------------\n");
    printf("|  Digite 3 para multiplicacao:|\n");
    printf("------------------------------\n");
    printf("|  Digite 4 para divisao:      |\n");
    printf("-------------------------------\n");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        adi = n1 + n2;
        printf("\nO resultado da sua adicao eh:\n %.0f ", adi);
        break;
    case 2:
        sub = n1 - n2;
        printf("\nO resultado da sua subtracao eh:\n %.0f ", sub);
        break;
    case 3:
        mult = n1 * n2;
        printf("\nO resultado da sua multiplicacao eh:\n %.2f ", mult);
        break;
    case 4:
        if (n2 == 0)
        {
            printf("\nDivisao invalida! ");
        }
        else
        {
            div = n1 / n2;
            printf("\nO resultado da sua divisao eh:\n %.0f ", div);
        }
        break;
    default:
        printf("\nOpcao invalida! \n");
        break;
    }

    return 0;
}
