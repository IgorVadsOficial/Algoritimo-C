#include <stdio.h>
// Elabore uma funcao, com retorno, que recebe um valor inteiro maior ou igual a zero
// por parametro e retorna o fatorial de tal numero

int ig_ze(int igze);

int main()
{
    float nf, result;
    printf("Digite um numero para descobrir o fatorial:");
    scanf("%f", &nf);

    if (nf <= 0)
    {
        printf("\n---------------------------------------\n");
        printf("\nNao existe fatorial de numero negativo!\n");
        printf("\n---------------------------------------\n");
    }
    else
    {
        result = ig_ze(nf);

        printf("\n---------------------------------------\n");
        printf(" O fatorial de %.0f eh %.0f                  |", nf, result);
        printf("\n---------------------------------------\n");
        return 0;
    }
}
int ig_ze(int igze)
{
    int i;
    float fatorial = 1;

    for (i = 1; i <= igze; i++)
    {
        fatorial = fatorial * i;
    }

    return fatorial;
}
