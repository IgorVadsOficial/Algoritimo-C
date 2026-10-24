#include <stdio.h>
/*Faca uma funcao, com retorno, para calcular o valor do volume de uma caixa
retangular, utilizando a seguinte formula:

Volume = comprimento × largura × altura

Obs.: os valores do comprimento, da largura e da altura devem ser fornecidos pelo
usuario e devem ser passados como argumento para a funcao. A funcao main deve
receber e exibir o resultado do calculo.*/

float volume(float comp, float lar, float alt);

int main(void)
{
    float c, l, a, result;
    printf("Para calcular o volume informe comprimento, largura e altura:\n\n");

    printf("Digite o comprimento: \n");
    scanf("%f", &c);

    printf("\nDigite a largura: \n");
    scanf("%f", &l);

    printf("\nDigite a altura: \n");
    scanf("%f", &a);

    result = volume(c, l, a);

    printf("Valor do volume: %.2f", result);
    return 0;
}

float volume(float comp, float lar, float alt)
{
    return (comp * lar * alt);
}
