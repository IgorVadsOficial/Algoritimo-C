#include <stdio.h>
/*Um programa que solicita e armazena cinco numeros inteiros em um vetor. Em
seguida, o programa deve percorrer o vetor e somar todos os seus valores. Ao final,
o programa deve exibir o resultado da soma*/

int main(void)
{
    int n[5], i, soma = 0;

    printf("Digite cinco valores: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%i° valor: ", i + 1);
        scanf("%i", &n[i]);
        soma = soma + n[i];
    }

    printf("\nSoma dos Valores: %i\n", soma);
    return 0;
}
