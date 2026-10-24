#include <stdio.h>
#include <math.h>

int main(void)
{
    float peso, altura, imc;
    printf("Digite o seu peso (em kg): ");
    scanf("%f", &peso);
    printf("\nDigite a sua altura (em metros): ");
    scanf("%f", &altura);
    imc = peso / (pow(altura, 2));
    printf(" O seu IMC eh: %0.2f", imc);
}
