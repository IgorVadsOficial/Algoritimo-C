#include <stdio.h>
// Um programa que calcula e exibe o fatorial dos numeros impares existentes
// no intervalo entre 1 (inclusive) e 11 (inclusive).

int main(void)
{
    int i, cont;
    double fatorial = 1;
    printf("Fatorial dos numeros impares de 1 a 11:\n");

    for (i = 1; i <= 11; i++)
    {
        if (i % 2 != 0)
        {
            for (cont = 1; cont <= i; cont++)
            {
                fatorial = fatorial * cont;
            }
            printf("%i! = %.0lf\n", i, fatorial);
            fatorial = 1;
        }
    }
    return 0;
}
