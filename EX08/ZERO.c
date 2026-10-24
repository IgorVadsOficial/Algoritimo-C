#include <stdio.h>

void zero(int numero)
{
    if (numero != 0)
    {
        printf("Esse numero nao eh igual a zero\n");
    }
    else
    {
        printf("Esse numero eh igual a zero\n");
    }
}

int main(void)
{
    int numero;

    printf("Digite um numero: ");
    if (scanf("%d", &numero) != 1)
    {
        printf("Numero invalido!\n");
        return 1;
    }

    zero(numero);
    return 0;
}
