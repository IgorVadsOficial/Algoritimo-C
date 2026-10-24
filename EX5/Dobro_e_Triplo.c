#include <stdio.h>

int main()
{
    float n1, n2, dobro, triplo;
    printf("Digite o numero que deseja dobrar: ");
    scanf("%f", &n1);
    printf("Digite o numero que deseja triplicar: ");
    scanf("%f", &n2);
    dobro = (n1 * 2);
    triplo = (n2 * 3);
    printf("O dobro do seu numero eh: %.2f\n", dobro);
    printf("O triplo do seu numero eh: %.2f\n", triplo);
}
