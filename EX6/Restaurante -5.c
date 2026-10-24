#include <stdio.h>

int main(void)
{
    int opcao, quant;
    float valor;

    printf("---------------------------------------------");
    printf("\n|CODIGO DO ITEM|ESPECIFICACAO|PRECO UNITARIO|\n");
    printf("\n|.....100......|...HOT-DOG...|......7,00....|\n");
    printf("\n|.....101......|....BAURU....|......8,00....|\n");
    printf("\n|.....102......|...X-SALADA..|......9,00....|\n");
    printf("\n|.....103......|..HAMBURGUER.|.....10,00....|\n");
    printf("\n|.....104......|.REFRI(LATA).|......3,00....|\n");
    printf("---------------------------------------------\n");

    printf("DIGITE O CODIGO DO SEU PRODUTO:");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 100:
        printf("QUANTOS VOCE DESEJA: ");
        scanf("%i", &quant);
        valor = 7.00 * quant;
        printf("VALOR TOTAL A PAGAR: %.2f", valor);
        break;
    case 101:
        printf("QUANTOS VOCE DESEJA: ");
        scanf("%i", &quant);
        valor = 8.00 * quant;
        printf("VALOR TOTAL A PAGAR: %.2f", valor);
        break;
    case 102:
        printf("QUANTOS VOCE DESEJA: ");
        scanf("%i", &quant);
        valor = 9.00 * quant;
        printf("VALOR TOTAL A PAGAR: %.2f", valor);
        break;
    case 103:
        printf("QUANTOS VOCE DESEJA: ");
        scanf("%i", &quant);
        valor = 10.00 * quant;
        printf("VALOR TOTAL A PAGAR: %.2f", valor);
        break;
    case 104:
        printf("QUANTOS VOCE DESEJA: ");
        scanf("%i", &quant);
        valor = 3.00 * quant;
        printf("VALOR TOTAL A PAGAR: %.2f", valor);
        break;
    default:
        printf("CODIGO INVALIDO! ");
        break;
    }

    return 0;
}
