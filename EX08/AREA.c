#include <stdio.h>
#include <math.h>

#define pi 3.14159

/*Elabore uma funcao, com retorno, que calcula a area de uma circunferencia. Para
isto, utilize a seguinte formula: A = piR^2

Obs.: o valor do raio deve ser fornecido pelo usuario e deve ser passado como
argumento para a funcao. A funcao main deve receber e exibir o resultado do
calculo.*/

float area(float raio);

int main()
{
    float r, result;
    printf("Qual o valor do raio? ");
    scanf("%f", &r);

    result = area(r);

    printf("A area do seu raio eh de: %.2f", result);

    return 0;
}
float area(float raio)
{
    return (pi * pow(raio, 2));
}
