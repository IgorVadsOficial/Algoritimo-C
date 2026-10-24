#include <stdio.h>
// Elabore um programa que exibe todos os numeros primos existentes entre
// x e y, onde x e y devem ser numeros naturais maiores que zero e fornecidos
// pelo usuario.

// *Exemplo: Se x = 2 e y = 7, o programa deve exibir os numeros 2, 3, 5 e 7.

// *Obs.: nao esqueca de verificar se o intervalo fornecido eh valido.

int main(void)
{
    int i, x, y, j, primo;
    printf("Digite o inicio do seu intervalo (numero natural maior que zero!): ");
    scanf("%i", &x);

    printf("Digite o fim do seu intervalo (numero natural maior que zero!): ");
    scanf("%i", &y);

    if (x <= 0 || y <= 0 || x > y)
    {
        printf("Intervalo invalido. Certifique-se de que x e y sejam numeros naturais maiores que zero e que x seja menor ou igual a y.\n");
        return 1;
    }

    printf("\nNumeros primos no intervalo entre %i e %i:\n", x, y);

    for (i = x; i <= y; i++)
    {
        primo = 1; // Assume que o numero eh primo.

        if (x <= 0)
        {
            primo = 0; // Assume que o numero nao eh primo porque numeros menores ou iguais a 1 nao sao primos.
        }
        else
        {
            for (j = 2; j * j <= i; ++j) // A variavel j eh utilizada para iterar sobre os possiveis divisores do numero i para verificar se ele eh primo ou nao. No trecho de codigo:
            {
                if (i % j == 0)
                {
                    primo = 0; // Nao eh primo
                    break;
                }
            }
        }
        if (primo)
        {
            printf("%i ", i);
        }
    }
    return 0;
}
