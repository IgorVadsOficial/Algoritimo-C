#include <stdio.h>
// Um programa que exibe o somatorio dos valores pares existentes na faixa
// de 1 (inclusive) ateh 500 (inclusive).

int main(void)
{
    int i, total = 0;
    printf("Somatorio de 1 ateh 500: ");

    for (i = 1; i <= 500; i++)
    {
        if (i % 2 == 0)
        {
            total = i + total;
        }
    }
    printf("\n\nO resultado final do somatorio eh de: %i\n", total);
    return 0;
}
