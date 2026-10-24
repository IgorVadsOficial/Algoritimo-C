#include <stdio.h>
// Um hotel cobra R$ 200,00 por diaria e mais uma taxa de servico. A taxa de servico eh
// cobrada de acordo com as seguintes condicoes:
// R$ 4,00 por diaria, se o numero de diarias for menor que 7;
// R$ 3,60 por diaria, se o numero de diarias for igual a 7;
// R$ 3,00 por diaria, se o numero de diarias for maior que 7.
// Um algoritmo que solicita e le o numero de diarias, calcula e exibe uma
// mensagem com o valor a ser pago.

int main(void)
{
    float diaria,valorT, taxa, valor;
    printf("Quantas diarias voce deseja?");
    scanf("%f", &diaria);

    if (diaria == 7)
    {
        valor = diaria * 200;
        taxa = diaria * 3.60;
        valorT = valor + taxa;
        printf("O valor total a pagar eh: R$ %.2f", valorT);
    }
    else if (diaria < 7)
    {
        valor = diaria * 200;
        taxa = diaria * 4.00;
        valorT = valor + taxa;
        printf("O valor total a pagar eh: R$ %.2f", valorT);
    }
    else
    {
        valor = diaria * 200;
        taxa = diaria * 3.00;
        valorT = valor + taxa;
        printf("O valor total a pagar eh: R$ %.2f", valorT);
    }
    return 0;
}


