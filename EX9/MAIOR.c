#include <stdio.h>
/*Um programa que solicita e armazena dez numeros inteiros em um vetor e,
ao final, informa o maior valor encontrado no vetor.*/

int main(void)
{
    int n[10], i, maior;

    printf("Digite dez valores: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%i° valor: ", i + 1);
        scanf("%i", &n[i]);
    }
    maior = n[i];

    for (i = 1; i < 10; i++)
    {
        if (n[i] > maior)
        {
            maior = n[i];
        }
    }
    printf("\nO maior valor encontrado foi: %i\n", maior);
    return 0;
}
