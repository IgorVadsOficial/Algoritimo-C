#include <stdio.h>

int main(void)
{
    int codigo;
    int quantidade;
    float preco;

    printf("---------------------------------------------\n");
    printf("|CODIGO DO ITEM|ESPECIFICACAO|PRECO UNITARIO|\n");
    printf("|.....100......|...HOT-DOG...|......7,00....|\n");
    printf("|.....101......|....BAURU....|......8,00....|\n");
    printf("|.....102......|...X-SALADA..|......9,00....|\n");
    printf("|.....103......|..HAMBURGUER.|.....10,00....|\n");
    printf("|.....104......|.REFRI(LATA).|......3,00....|\n");
    printf("---------------------------------------------\n");

    printf("Digite o codigo do seu item: ");
    if (scanf("%d", &codigo) != 1) {
        printf("Codigo invalido!\n");
        return 1;
    }

    switch (codigo) {
        case 100:
        preco = 7.00f;
        break;
        case 101:
        preco = 8.00f;
        break;
        case 102:
        preco = 9.00f;
        break;
        case 103:
        preco = 10.00f;
        break;
        case 104:
        preco = 3.00f;
        break;
        default:
        printf("Codigo invalido!\n");
        return 1;
    }

    printf("Quantas voce deseja? ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    printf("O valor total a pagar eh: R$ %.2f\n", preco * quantidade);
    return 0;
}

