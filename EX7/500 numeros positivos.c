#include <stdio.h>
// um programa que exibe, em ordem decrescente, os 500 primeiros numeros
// inteiros positivos.

int main(void)
{
    int i;
    printf("500 numeros positivos: ");

    for (i = 500; i >= 1; i--)
    {
        printf("\n%i", i);
    }

    return 0;
}
