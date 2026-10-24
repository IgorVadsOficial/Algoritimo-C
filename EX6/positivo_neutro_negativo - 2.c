#include <stdio.h>

int main(void)
{
    int n1;

    printf("Digite um numero: ");
    scanf("%i", &n1);

    if (n1 > 0)
    {
        printf("\nEsse numero eh positivo: ");
    }
    else
    {
        if (n1 < 0)
        {
            printf("\nEsse numero eh negativo");
        }
        else
        {
            printf("\nEsse numero eh neutro");
        }
    }

    return 0;
}
