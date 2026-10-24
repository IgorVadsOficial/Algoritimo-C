#include <stdio.h>

int main(void)
{
    int i, soma;

    // o somatorio dos valores pares existentes na faixa de 1
    //(inclusive) ateh 500 (inclusive).
    printf("------------------------------");
    printf("\nSomatorio pares entre 10 e 500:\n");
    printf("------------------------------");

    for (i = 10; i <= 500; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d", i);
            soma += i;
        }
    }
    printf("\nSoma: %i\n", soma);
    return 0;
}
