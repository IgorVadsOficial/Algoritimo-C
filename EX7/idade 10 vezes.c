#include <stdio.h>
// Escreva um programa que solicita e le a idade do usuario, e exibe uma mensagem
// informando se ele eh maior ou menor de idade. Esses procedimentos devem ser
// repetidos 10 vezes.

int main(void)
{
    int idade, i;

    for (i = 1; i <= 10; i++)
    {
        printf("\nQual a sua idade? ");
        scanf("%i", &idade);

        if (idade >= 18)
        {
            printf("\nVoce eh maior de idade!!!\n");
        }
        else
        {
            printf("\nVoce ainda nao eh maior de idade!!!\n");
        }
    }

    return 0;
}
