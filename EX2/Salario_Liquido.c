#include <stdio.h>
//*Algoritmo para descobrir o valor do salario liquido de um professor*
// SB representa o salario bruto
// HT representa o numero de horas trabalhadas;
// VH representa o valor da hora aula
// TD representa o total de desconto
// PD representa o percentual de desconto do INSS
// SL representa o salario liquido

int main(void)
{
    float HT, VH, PD, SB, TD, SL;

    printf("Qual o valor da sua hora de aula? ");
    scanf("%f", &VH);

    printf("Quantas horas voce trabalha por mes? ");
    scanf("%f", &HT);

    printf("Qual o valor de desconto do INSS? ");
    scanf("%f", &PD);

    SB = HT * VH;         // Para descobrir o salario bruto.
    TD = (PD / 100) * SB; // Para descobrir o total de desconto.
    SL = SB - TD;         // Para descobrir o salario liquido.

    printf("\n O seu salario liquido eh de: R$ %.0f \n ", SL);
    return 0;
}
