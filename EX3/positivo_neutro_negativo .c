#include <stdio.h>
// Um algoritmo que solicita e le um valor inteiro e informa se ele eh positivo, negativo ou neutro.

int main(void)
{
    float n1;

    printf("Digite um numero: ");
    scanf("%f", &n1);

    if (n1 > 0)
    {
        printf("Esse numero eh positivo.\n");
    }
    else if ( n1 < 0)
    {
        printf("Esse numero eh negativo.\n");
    }
    else
    {
        printf("Esse numero eh neutro.\n");
    }
    return 0;
}
