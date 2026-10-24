#include <stdio.h>

int main(void)
{
    int idade;
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf ("Voce chegou a maioridade.");
    }
    else
    {
        printf ("Voce ainda nao chegou a maioridade.");
    }
    return 0;
}
