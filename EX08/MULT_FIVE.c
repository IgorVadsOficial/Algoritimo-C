#include <stdio.h>

void mult_five(int five)
{
    if (five % 5 == 0)
    {
        printf("Esse numero eh multiplo de 5!\n");
    }
    else
    {
        printf("Esse numero nao eh multiplo de 5!\n");
    }
}

int main(void)
{
    int five;

    printf("Digite um numero para descobrir se eh multiplo de 5: ");
    if (scanf("%d", &five) != 1)
    {
        printf("Numero invalido!\n");
        return 1;
    }

    mult_five(five);
    return 0;
}
