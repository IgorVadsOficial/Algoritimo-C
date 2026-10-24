#include <stdio.h>

void pnn(float numero)
{
    if (numero > 0)
    {
        printf("Esse numero eh positivo\n");
    }
    else if (numero < 0)
    {
        printf("Esse numero eh negativo\n");
    }
    else
    {
        printf("Esse numero eh neutro\n");
    }
}

int main(void)
{
    float numero;

    printf("Digite um numero: ");
    if (scanf("%f", &numero) != 1)
    {
        printf("Numero invalido!\n");
        return 1;
    }

    pnn(numero);
    return 0;
}
