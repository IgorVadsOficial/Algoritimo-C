#include <stdio.h>
//exibe somente os numeros pares existentes no intervalo
//de 10 (inclusive) a 100 (inclusive).

int main(void)
{
    int i;
    printf("------------------------------");
    printf("\nNumero pares entre 10 a 100:\n");
    printf("------------------------------");

    for (i = 10; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("\n%d",i);
        }
    }
    return 0;
}
