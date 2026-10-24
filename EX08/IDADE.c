#include <stdio.h>

void idade(int id)
{
    if (id >= 18)
    {
        printf("VOCE EH MAIOR DE IDADE!\n");
    }
    else
    {
        printf("VOCE AINDA NAO EH MAIOR DE IDADE!\n");
    }
}

int main(void)
{
    int id;

    printf("Qual a sua idade? ");
    if (scanf("%d", &id) != 1)
    {
        printf("Idade invalida!\n");
        return 1;
    }

    idade(id);
    return 0;
}
