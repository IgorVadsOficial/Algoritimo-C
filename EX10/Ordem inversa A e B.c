#include <stdio.h>
/*
 * Programa que solicita e armazena oito numeros reais em uma matriz 4 x 2,
 * denominada A. Em seguida, cria a matriz B com os mesmos elementos de A,
 * porem na ordem inversa.
 */

int main(void)
{
    float a[4][2];
    float b[4][2];
    int i;
    int j;
    int indice = 1;

    printf("Matriz A\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite o %d valor para [%d][%d]: ", indice++, i, j);
            if (scanf("%f", &a[i][j]) != 1)
            {
                printf("Valor invalido!\n");
                return 1;
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            b[i][j] = a[3 - i][1 - j];
        }
    }

    printf("Matriz B\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%.2f ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
