#include <stdio.h>

int main(void)
{
    float n1, n2, n3, AF, MP, MF;

    printf("Primeira nota:\n");
    scanf("%f", &n1);

    printf("Segunda nota:\n");
    scanf("%f", &n2);

    printf("Terceira nota:\n");
    scanf("%f", &n3);

    MP = (n1 + n2 + n3) / 3;

    if (MP >= 7)
    {
        printf("VOCE FOI APROVADO");
    }
    else
    {
        if (MP >= 3.5 && MP < 7)
        {
            printf("VOCE TERA QUE FAZER A AVALIACAO FINAL.\n");
            printf("Qual a sua nota na quarta prova?\n");
            scanf("%f", &AF);
            MF = ((6 * MP) + (4 * AF)) / 10;
            printf("Sua mehdia final foi de: %.2f\n", MF);
        }
        else
        {
            printf("VOCE FOI REPROVADO!\n");
        }
        if (MF >= 5)
        {
            printf("VOCE FOI APROVADO!\n");
        }
        else
        {
            printf("VOCE FOI REPROVADO!\n");
        }
    }
    return 0;
}
