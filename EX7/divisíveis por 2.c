#include <stdio.h>
//Um programa que exibe os numeros divisiveis por 2 existentes no intervalo
//de 10 (inclusive) a 50 (inclusive). Ao final, o programa deve informar
//o total de numeros que foram exibidos.

int main(void)
{
    int i, total = 0;

    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0) {
            printf("\n%i", i);
            total++;
        }
    }
    printf("\n---------------------------------------\n");
    printf("Total de numeros divisiveis por 2: %d" , total);
    printf("\n---------------------------------------\n");
    return 0;
}
