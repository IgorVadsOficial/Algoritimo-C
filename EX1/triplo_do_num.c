#include <stdio.h>

int main(void)
{
    float n1, result;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    result = n1 * 3;
    printf("O triplo do seu numero eh: %.0f", result);
    return 0;
}

