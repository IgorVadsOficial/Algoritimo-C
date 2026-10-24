#include <stdio.h>
// um algoritmo que solicita e le dois numeros inteiros (numerador e denominador) e verifica se a divisao eh exata,
// a divisao so deve ser realizada, caso o denominador seja diferente de zero.

int main(void)
{
    int numerador,denominador,resto;

    printf("Digite o numerador: " );
    scanf("%i", &numerador);

    printf("Digite o denominador: " );
    scanf("%i", &denominador);

    if (denominador == 0) {
        printf("A divisao por zero nao eh definida.\n");
    } else {
        resto = numerador % denominador;

        if (resto == 0) {
            printf("Essa divisao eh exata.\n");
        } else {
            printf("Essa divisao nao eh exata.\n");
        }
    }
    return 0;
}

